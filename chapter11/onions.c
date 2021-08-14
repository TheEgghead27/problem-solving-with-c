#include <stdio.h>

int main(void) {
        // structure in a union

        /*
        union showinfo {
            char date_avail[9];  // cant set default
            char date_sched[9];
            struct past_con {
                char date_appeared;
                double amount_won;
                char socsecnum[10];
            } onshow;
        } state;
         */
        struct past_con {
            char date_appeared;
            double amount_won;
            char socsecnum[10];
        };

        union showinfo {
            char date_avail[9];
            char date_sched[9];
            // int status;      to keep track of whch one to use
            struct past_con onshow;
        } state;
        /*
         * state.date_avail            state.date.sched         state.onshow.date_appeared
         *                                                      state.onshow.amount_won
         *                                                      state.onshow.socsecnum
         */
        /// since all three date variables take the same space, after amount_won and socsecnum are written to by an onshow, they may still be accessible after reassignment to a data variable only, which can lead to a mess
        /// yy/mm/dd semi-ISO format for easier pasting
}