#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BAC48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BAC48;

loc_801BAC48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = MemoryInline::FlatRead32((r13 + -24660));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = -872415232;
    r0 = MemoryInline::FlatRead16((r5 + 8236));
    r8 = (r0 & 2047);
}

loc_801BAC70:
{
    r4 = MemoryInline::FlatRead16((r5 + 8238));
    r6 = r8;
    r0 = MemoryInline::FlatRead16((r5 + 8236));
    r7 = (r4 & 2047);
    r8 = (r0 & 2047);
}

loc_801BAC88:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r8))) {
        goto loc_801BAC70;
    }
}

loc_801BAC8C:
{
    r4 = MemoryInline::FlatRead32((r13 + -24660));
    r5 = (r7 + -1);
    r6 = (r8 + -1);
    r0 = MemoryInline::FlatRead16((r4 + 26));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r31 = (r4 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801BACB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801BACBC;
    }
}

loc_801BACB8:
{
    r31 = (r31 - r0);
}

loc_801BACBC:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 2147483647);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00021FB gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BAC48 func_801BAC48 preserves=true fpr_mask=0x00000000
