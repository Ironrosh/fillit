/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_f_m_a_p4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:46:47 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 16:48:24 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_F_F_M_A_P4_H
# define FILLIT_F_F_M_A_P4_H

# include <stdlib.h>
# include <unistd.h>
# include "field.h"
# include "main_algorithm.h"
# include "validate.h"

void	set_gen_st(t_ms *p, char *str, int quantity);
void	set_gen_p0(t_ms *q, char *str, t_gg *g_g);
int		set_gen_arg(t_ms *q, char d2garray[][g_s], int quantity, char *str);
int		check_zero(int symbols, char *buf);
void	vl_init(t_vl *val_st, int fd, int size);

#endif
