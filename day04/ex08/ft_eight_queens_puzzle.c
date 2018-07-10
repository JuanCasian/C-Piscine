/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 20:06:32 by jcasian           #+#    #+#             */
/*   Updated: 2018/05/19 23:30:30 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	initialize_board(int *board)
{
	int i;

	i = 0;
	while (i < 8)
	{
		board[i] = -1;
		i++;
	}
}

int		check_hor(int *board, int x, int y)
{
	x--;
	while (x >= 0)
	{
		if (board[x] == y)
			return (0);
		x--;
	}
	return (1);
}

int		check_diagonal(int *board, int x, int y)
{
	int count;

	count = 1;
	x--;
	while (x >= 0)
	{
		if(board[x] == (y - count))
			return (0);
		if(board[x] == (y + count))
			return(0);
		count++;
		x--;
	}
	return (1);
}

int		move(int *board, int x, int *result)
{
	int y;

	y = board[x];
	if (y >= 8)
		return (*result);
	board[x] = y + 1;
	if ((check_hor(board, x, y) == 1) && (check_diagonal(board, x, y) == 1))
	{
		if (x != 7)
			move(board, (x + 1), result);
		else
		{
			*result = *result + 1;
			move(board, x, result);
		}
	}
	if (y == 7)
		move(board, (x -1), result);
	move(board, x, result);
	return (*result);
}

int		ft_eight_queens_puzzle(void)
{
	int x;
	int boardarr[8];
	int *board;
	int res;
	int *result;

	x = 0;
	res = 0;
	board = boardarr;
	initialize_board(board);
	res = move(board, x, result);
	return (res);
}
