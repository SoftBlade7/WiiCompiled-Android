#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B0560(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800B0560;

loc_800B0560:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r9 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r11 = MemoryInline::FlatRead32((r3 + 24));
    r10 = MemoryInline::FlatRead32((r3 + 20));
    r8 = (r11 + r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    r6 = (r8 + 31);
    r0 = (r10 + 31);
    r6 = (r6 & -32);
    MemoryInline::FlatWrite32((r3 + 16), r7);
    r0 = (r0 & -32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_800B0598:
{
    MemoryInline::FlatWrite8((r3 + 108), static_cast<uint8_t>(r9));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B05AC;
    }
}

loc_800B05A0:
{
    r5 = (r10 - r11);
    r0 = (r5 + 31);
    r5 = (r0 & -32);
}

loc_800B05AC:
{
    r8 = MemoryInline::FlatRead32((r3 + 104));
    r7 = 0x800B0000u;
    r6 = r11;
    r3 = (r3 + 40);
    r7 = (r7 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8015E74Cu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000EFB gpr_write=0x00000FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B0560 func_800B0560 preserves=true fpr_mask=0x00000000
