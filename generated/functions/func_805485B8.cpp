#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805485B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805485B8;

loc_805485B8:
{
    r10 = (r5 * 3072);
    r9 = (r6 * 96);
    r0 = (r3 + r10);
    r8 = (r0 + r9);
    r0 = MemoryInline::FlatRead8((r8 + 3600));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805485D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054864C;
    }
}

loc_805485D4:
{
    r0 = 38;
    r7 = (r4 + -1);
    r6 = (r8 + 3519);
    ctr = r0;
}

loc_805485E4:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r0 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    r7_stbu_ea_2 = (r7 + 2);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r0));
    r7 = r7_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805485E4;
    }
}

loc_805485F8:
{
    r3 = (r3 + r10);
    r0 = 1;
    r5 = (r3 + r9);
    r3 = MemoryInline::FlatRead32((r5 + 3596));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r7 = (r7_rot_0 & 1023);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r6 = (r6_rot_0 & 127);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r3 = (r3_rot_0 & 127);
    MemoryInline::FlatWrite8((r4 + 86), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r4 + 80), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 82), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r4 + 84), static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead8((r8 + 3600));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite32((r4 + 88), r0);
    r0 = MemoryInline::FlatRead32((r5 + 3596));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 63);
    MemoryInline::FlatWrite32((r4 + 92), r0);
    r0 = MemoryInline::FlatRead8((r5 + 3601));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 7);
    MemoryInline::FlatWrite32((r4 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8054864C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 86), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000778 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805485B8 func_805485B8 preserves=true fpr_mask=0x00000000
