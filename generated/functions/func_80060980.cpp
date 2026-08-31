#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060980(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t mkw_fifo_burst_0[25];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_80060980;

loc_80060980:
{
    r8 = -872349696;
    r9 = 8;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r9);
    r0 = 48;
    r4 = 1022623744;
    r3 = 15990784;
    mkw_fifo_burst_0[1] = static_cast<uint8_t>(r0);
    r7 = (r4 + -12544);
    r5 = (r3 + -12484);
    r6 = 64;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = 16;
    r3 = 1;
    r0 = 4120;
    mkw_fifo_burst_0[6] = static_cast<uint8_t>(r9);
    mkw_fifo_burst_0[7] = static_cast<uint8_t>(r6);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[12] = static_cast<uint8_t>(r4);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[15] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[20] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[24] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 25u);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80060980 func_80060980 preserves=true fpr_mask=0x00000000
