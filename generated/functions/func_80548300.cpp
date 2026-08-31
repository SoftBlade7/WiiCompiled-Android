#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548300(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80548300;

loc_80548300:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r5 = (r4 + -29504);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    ctx->lr = 0x80548324u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808B0000u;
    r4 = 2;
    r6 = 0;
    r5 = 5000;
    r0 = MemoryInline::FlatRead16((r31 + 234));
    r3 = (r3 + 15500);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r0_mrot_0 = (r0_rot_0 & 49152);
    r0_mdest_0 = (r0 & -49153);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r7 = (r31 + 128);
    r8 = 0;
    r3 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    MemoryInline::FlatWrite32((r31 + 48), r6);
    MemoryInline::FlatWrite32((r31 + 52), r6);
    MemoryInline::FlatWrite32((r31 + 56), r6);
    MemoryInline::FlatWrite32((r31 + 60), r6);
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r31 + 234), static_cast<uint16_t>(r0));
    ctr = r4;
}

loc_80548380:
{
}

loc_80548384:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(1))) {
        goto loc_8054839C;
    }
}

loc_80548388:
{
}

loc_8054838C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(3))) {
        goto loc_8054839C;
    }
}

loc_80548390:
{
    r0 = MemoryInline::FlatRead16(r7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r0_mrot_2 = (r0_rot_2 & 49152);
    r0_mdest_2 = (r0 & -49153);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
}

loc_8054839C:
{
    r0 = MemoryInline::FlatRead16(r7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0_mrot_4 = (r0_rot_4 & 12288);
    r0_mdest_4 = (r0 & -12289);
    r0 = (r0_mdest_4 | r0_mrot_4);
}

loc_805483A8:
{
    r0 = (r0 & -4033);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(3))) {
        goto loc_805483CC;
    }
}

loc_805483B4:
{
}

loc_805483B8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(1))) {
        goto loc_805483CC;
    }
}

loc_805483BC:
{
    r0 = MemoryInline::FlatRead16(r7);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_5 = (r0_rot_5 & 60);
    r0_mdest_5 = (r0 & -61);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    goto loc_805483D8;
}

loc_805483CC:
{
    r0 = MemoryInline::FlatRead16(r7);
    r0 = (r0 & -61);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
}

loc_805483D8:
{
    r8 = (r8 + 1);
}

loc_805483E0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(1))) {
        goto loc_805483F8;
    }
}

loc_805483E4:
{
}

loc_805483E8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(3))) {
        goto loc_805483F8;
    }
}

loc_805483EC:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r0_mrot_7 = (r0_rot_7 & 49152);
    r0_mdest_7 = (r0 & -49153);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
}

loc_805483F8:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0_mrot_9 = (r0_rot_9 & 12288);
    r0_mdest_9 = (r0 & -12289);
    r0 = (r0_mdest_9 | r0_mrot_9);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(3));
}

loc_80548404:
{
    r0 = (r0 & -4033);
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80548428;
    }
}

loc_80548410:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(1));
}

loc_80548414:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80548428;
    }
}

loc_80548418:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_10 = (r0_rot_10 & 60);
    r0_mdest_10 = (r0 & -61);
    r0 = (r0_mdest_10 | r0_mrot_10);
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    goto loc_80548434;
}

loc_80548428:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r0 = (r0 & -61);
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
}

loc_80548434:
{
    r7 = (r7 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80548380;
    }
}

loc_80548440:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001DB gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80548300 func_80548300 preserves=true fpr_mask=0x00000000
