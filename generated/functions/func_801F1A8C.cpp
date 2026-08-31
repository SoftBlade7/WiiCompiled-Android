#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F1A8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F1A8C;

loc_801F1A8C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1A98:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1AB4;
    }
}

loc_801F1AAC:
{
    r3 = 1;
    goto loc_801F1C04;
}

loc_801F1AB4:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F1AC0:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F1ACC;
    }
}

loc_801F1AC4:
{
}

loc_801F1AC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F1AD4;
    }
}

loc_801F1ACC:
{
    r0 = 1;
    goto loc_801F1B60;
}

loc_801F1AD4:
{
    r4 = (r8 * 56);
    r5 = 0x80360000u;
    r0 = 13;
    r5 = (r5 + -23936);
    r4 = (r5 + r4);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & 65535);
    r6 = (r4 + 420);
    r4 = 0;
    ctr = r0;
}

loc_801F1AF8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F1B08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F1B18;
    }
}

loc_801F1B0C:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F1B14:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F1B44;
    }
}

loc_801F1B18:
{
    r4 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F1B2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F1B3C;
    }
}

loc_801F1B30:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F1B38:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F1B44;
    }
}

loc_801F1B3C:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F1AF8;
    }
}

loc_801F1B44:
{
    r5 = (r4 & 65535);
    r4 = 26;
    r0 = (r5 + -26);
    r4 = (r5 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r4 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_801F1B60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1B64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1B70;
    }
}

loc_801F1B68:
{
    r3 = r0;
    goto loc_801F1C04;
}

loc_801F1B70:
{
    r0 = (r8 * 56);
    r4 = 0x80360000u;
    r4 = (r4 + -23936);
    r30 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r30 + 438));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1B88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1B94;
    }
}

loc_801F1B8C:
{
    r3 = 14;
    goto loc_801F1C04;
}

loc_801F1B94:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F1B98:
{
    r4 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1BD0;
    }
}

loc_801F1BA0:
{
    r4 = MemoryInline::FlatRead32((r30 + 424));
    r12 = MemoryInline::FlatRead32((r4 + 12));
    ctr = r12;
    ctx->lr = 0x801F1BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801F1BB4:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F1BD0;
    }
}

loc_801F1BBC:
{
    r3 = MemoryInline::FlatRead32((r30 + 468));
}

loc_801F1BC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F1BCC;
    }
}

loc_801F1BC8:
{
    // inline leaf 0x801F3EAC (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1912), r4);
    // end of inlined leaf 0x801F3EAC
}

loc_801F1BCC:
{
    r4 = 21;
}

loc_801F1BD0:
{
}

loc_801F1BD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801F1BE0;
    }
}

loc_801F1BD8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_801F1BDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1C00;
    }
}

loc_801F1BE0:
{
    r3 = MemoryInline::FlatRead16((r30 + 438));
    r3 = (r3 + -1);
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1BEC:
{
    MemoryInline::FlatWrite16((r30 + 438), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1C00;
    }
}

loc_801F1BF4:
{
    r0 = MemoryInline::FlatRead32((r30 + 420));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r30 + 420), r0);
}

loc_801F1C00:
{
    r3 = r4;
}

loc_801F1C04:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F1A8C func_801F1A8C preserves=true fpr_mask=0x00000000
