#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80207450(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80207450;

loc_80207450:
{
    r0 = MemoryInline::FlatRead16(r3);
    r5 = (r0 & 255);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 8);
}

loc_80207460:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(128))) {
        goto loc_80207484;
    }
}

loc_80207464:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80207468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207484;
    }
}

loc_8020746C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r3 = 1;
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_80207484:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 65280);
    r0 = (r0 + r5);
    r9 = (r0 & 65535);
}

loc_80207494:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(65377))) {
        goto loc_802074C0;
    }
}

loc_80207498:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(65439));
}

loc_8020749C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802074C0;
    }
}

loc_802074A0:
{
    r3 = (r9 + -65536);
    r0 = 0;
    r3 = (r3 + 320);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r3 = 1;
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_802074C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(95));
}

loc_802074C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802074DC;
    }
}

loc_802074C8:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_802074DC:
{
    r5 = 0x80250000u;
    r6 = 0;
    r5 = (r5 + 12704);
    r0 = 21;
}

loc_802074EC:
{
    r8 = r5;
    r7 = 0;
    ctr = r0;
}

loc_802074F8:
{
    r3 = MemoryInline::FlatRead16(r8);
}

loc_80207500:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207504:
{
    r3 = MemoryInline::FlatRead16((r8 + 2));
    r7 = (r7 + 1);
}

loc_80207510:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207514:
{
    r3 = MemoryInline::FlatRead16((r8 + 4));
    r7 = (r7 + 1);
}

loc_80207520:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207524:
{
    r3 = MemoryInline::FlatRead16((r8 + 6));
    r7 = (r7 + 1);
}

loc_80207530:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207534:
{
    r3 = MemoryInline::FlatRead16((r8 + 8));
    r7 = (r7 + 1);
}

loc_80207540:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207544:
{
    r3 = MemoryInline::FlatRead16((r8 + 10));
    r7 = (r7 + 1);
}

loc_80207550:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207554:
{
    r3 = MemoryInline::FlatRead16((r8 + 12));
    r7 = (r7 + 1);
}

loc_80207560:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207564:
{
    r3 = MemoryInline::FlatRead16((r8 + 14));
    r7 = (r7 + 1);
}

loc_80207570:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207574:
{
    r3 = MemoryInline::FlatRead16((r8 + 16));
    r7 = (r7 + 1);
}

loc_80207580:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r9))) {
        goto loc_80207590;
    }
}

loc_80207584:
{
    r7 = (r7 + 1);
    r8 = (r8 + 18);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802074F8;
    }
}

loc_80207590:
{
}

loc_80207594:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(189))) {
        goto loc_802075A8;
    }
}

loc_80207598:
{
    r6 = (r6 + 1);
    r5 = (r5 + 378);
}

loc_802075A4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(45))) {
        goto loc_802074EC;
    }
}

loc_802075A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(189));
}

loc_802075AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802075C4;
    }
}

loc_802075B0:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_802075C4:
{
}

loc_802075C8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_802075EC;
    }
}

loc_802075CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(3));
}

loc_802075D0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802075EC;
    }
}

loc_802075D4:
{
    r3 = (r6 + 129);
    r0 = (r7 + 64);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
    goto loc_802076A0;
}

loc_802075EC:
{
}

loc_802075F0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(4))) {
        goto loc_80207614;
    }
}

loc_802075F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(28));
}

loc_802075F8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80207614;
    }
}

loc_802075FC:
{
    r3 = (r6 + 131);
    r0 = (r7 + 64);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
    goto loc_802076A0;
}

loc_80207614:
{
}

loc_80207618:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(29))) {
        goto loc_8020763C;
    }
}

loc_8020761C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(39));
}

loc_80207620:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020763C;
    }
}

loc_80207624:
{
    r3 = (r6 + 195);
    r0 = (r7 + 64);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
    goto loc_802076A0;
}

loc_8020763C:
{
}

loc_80207640:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(40))) {
        goto loc_80207664;
    }
}

loc_80207644:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(41));
}

loc_80207648:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80207664;
    }
}

loc_8020764C:
{
    r3 = (r6 + 197);
    r0 = (r7 + 64);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
    goto loc_802076A0;
}

loc_80207664:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(42));
}

loc_80207668:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8020768C;
    }
}

loc_8020766C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(44));
}

loc_80207670:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020768C;
    }
}

loc_80207674:
{
    r3 = (r6 + 208);
    r0 = (r7 + 64);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & -256);
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
    goto loc_802076A0;
}

loc_8020768C:
{
    r0 = 95;
    r3 = 1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_802076A0:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & 255);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r3));
    r3 = 2;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 2;
    // inline leaf 0x801EF6C0 (3 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & -65536);
    r3 = (r0 + r4);
    // end of inlined leaf 0x801EF6C0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80207450 func_80207450 preserves=true fpr_mask=0x00000000
