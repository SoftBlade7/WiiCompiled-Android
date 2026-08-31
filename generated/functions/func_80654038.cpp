#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80654038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80654038;

loc_80654038:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80654060:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065406C;
    }
}

loc_80654064:
{
    r3 = 1;
    goto loc_80654138;
}

loc_8065406C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r6 = 1;
    r9 = MemoryInline::FlatRead8((r4 + 36));
    r8 = 0;
    r0 = (r0 * 88);
    r7 = MemoryInline::FlatRead32((r30 + 4));
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r10 = 0;
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 89));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r7 = (r7 | r0);
    ctr = r9;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(0));
}

loc_806540B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80654128;
    }
}

loc_806540B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 10544));
    r4 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80654120;
    }
}

loc_806540C8:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806540DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80654120;
    }
}

loc_806540E0:
{
}

loc_806540E4:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(0))) {
        goto loc_806540FC;
    }
}

loc_806540E8:
{
}

loc_806540EC:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(12))) {
        goto loc_806540FC;
    }
}

loc_806540F0:
{
    r4 = (r3 + r10);
    r4 = MemoryInline::FlatRead8((r4 + 10528));
    goto loc_80654100;
}

loc_806540FC:
{
    r4 = 255;
}

loc_80654100:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r9 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654120;
    }
}

loc_8065411C:
{
    r8 = (r8 | r9);
}

loc_80654120:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806540B8;
    }
}

loc_80654128:
{
    r0 = (r8 & r7);
    r0 = (r0 - r8);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_80654138:
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
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00007FB gpr_write=0xC00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80654038 func_80654038 preserves=true fpr_mask=0x00000000
