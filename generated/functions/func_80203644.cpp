#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80203644(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_80203644;

loc_80203644:
{
    r9 = 0;
    goto loc_80203660;
}

loc_8020364C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r9 = (r9 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80203660:
{
}

loc_80203664:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(8))) {
        goto loc_8020367C;
    }
}

loc_80203668:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020367C;
    }
}

loc_80203674:
{
}

loc_80203678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8020364C;
    }
}

loc_8020367C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80203680:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802036B4;
    }
}

loc_80203684:
{
    r9 = 0;
    goto loc_802036A0;
}

loc_8020368C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r9 = (r9 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_802036A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(2));
}

loc_802036A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802036B4;
    }
}

loc_802036A8:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020368C;
    }
}

loc_802036B4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r9), static_cast<int32_t>(8));
}

loc_802036B8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_802036C4;
    }
}

loc_802036BC:
{
    r3 = 10;
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

loc_802036C4:
{
    r8 = (r5 & 8);
}

loc_802036C8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8020372C;
    }
}

loc_802036CC:
{
    r6 = (8 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r7 = 32;
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8020372C;
    }
}

loc_802036D8:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
}

loc_802036DC:
{
    r0 = r6;
    ctr = r5;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80203718;
    }
}

loc_802036E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802036E8;
    }
}

loc_80203710:
{
    r6 = (r6 & 7);
}

loc_80203714:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80203728;
    }
}

loc_80203718:
{
    ctr = r6;
}

loc_8020371C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8020371C;
    }
}

loc_80203728:
{
    r9 = (r9 + r0);
}

loc_8020372C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203768;
    }
}

loc_80203738:
{
}

loc_8020373C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8020375C;
    }
}

loc_80203740:
{
    r4 = (r4 + 1);
    goto loc_8020375C;
}

loc_80203748:
{
    r0 = MemoryInline::FlatRead8(r4);
    r9 = (r9 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_8020375C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80203748;
    }
}

loc_80203768:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(11));
}

loc_8020376C:
{
    r4 = (11 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(11) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r5 = 32;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802037C4;
    }
}

loc_80203778:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020377C:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802037B4;
    }
}

loc_80203784:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80203784;
    }
}

loc_802037AC:
{
    r4 = (r4 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_802037B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802037C4;
    }
}

loc_802037B4:
{
    ctr = r4;
}

loc_802037B8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802037B8;
    }
}

loc_802037C4:
{
    r3 = 0;
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

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80203644 func_80203644 preserves=true fpr_mask=0x00000000
