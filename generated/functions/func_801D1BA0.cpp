#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D1BA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_addr_dcbz_0 = 0;
    uint32_t r6_addr_dcbz_1 = 0;
    uint32_t r6_addr_dcbz_2 = 0;
    uint32_t r6_addr_dcbz_3 = 0;
    uint32_t r6_addr_dcbz_4 = 0;
    uint32_t r6_addr_dcbz_5 = 0;
    uint32_t r6_addr_dcbz_6 = 0;
    uint32_t r6_addr_dcbz_7 = 0;
    uint32_t r6_addr_dcbz_al_0 = 0;
    uint32_t r6_addr_dcbz_al_1 = 0;
    uint32_t r6_addr_dcbz_al_2 = 0;
    uint32_t r6_addr_dcbz_al_3 = 0;
    uint32_t r6_addr_dcbz_al_4 = 0;
    uint32_t r6_addr_dcbz_al_5 = 0;
    uint32_t r6_addr_dcbz_al_6 = 0;
    uint32_t r6_addr_dcbz_al_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r8_subfic_ra_0 = 0;
    uint32_t r8_subfic_ra_1 = 0;
    uint32_t r8_subfic_ra_2 = 0;
    uint32_t r8_subfic_ra_3 = 0;
    uint32_t r8_subfic_ra_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D1BA0;

loc_801D1BA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801D1BA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801D1BA8:
{
}

loc_801D1BAC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4_mrot_1 = (r4_rot_1 & 65280);
    r4_mdest_1 = (r4 & -65281);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4_mrot_2 = (r4_rot_2 & -65536);
    r4_mdest_2 = (r4 & 65535);
    r4 = (r4_mdest_2 | r4_mrot_2);
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(64))) {
        goto loc_801D1C64;
    }
}

loc_801D1BB8:
{
    r8 = (r3 & 31);
}

loc_801D1BBC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801D1C04;
    }
}

loc_801D1BC0:
{
    r8_subfic_ra_1 = r8;
    r8 = (32 - r8_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r8_subfic_ra_1) ? 1u : 0u) << 29);
    r7 = r3;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
}

loc_801D1BCC:
{
    r0 = (r8 & 3);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D1BE4;
    }
}

loc_801D1BD4:
{
    ctr = r6;
}

loc_801D1BD8:
{
    MemoryInline::FlatWrite32(r7, r4);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1BD8;
    }
}

loc_801D1BE4:
{
}

loc_801D1BE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D1BFC;
    }
}

loc_801D1BEC:
{
    ctr = r0;
}

loc_801D1BF0:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r4));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1BF0;
    }
}

loc_801D1BFC:
{
    r3 = (r3 + r8);
    r5 = (r5 - r8);
}

loc_801D1C04:
{
}

loc_801D1C08:
{
    r6 = r3;
    r7 = (r5 & -32);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801D1C2C;
    }
}

loc_801D1C18:
{
    ctr = r0;
}

loc_801D1C1C:
{
    r6_addr_dcbz_2 = r6;
    r6_addr_dcbz_al_2 = (r6_addr_dcbz_2 & -32);
    memset_zero_32(r6_addr_dcbz_al_2);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1C1C;
    }
}

loc_801D1C28:
{
    goto loc_801D1C5C;
}

loc_801D1C2C:
{
    ctr = r0;
}

loc_801D1C30:
{
    r6_addr_dcbz_4 = r6;
    r6_addr_dcbz_al_4 = (r6_addr_dcbz_4 & -32);
    memset_zero_32(r6_addr_dcbz_al_4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 28), r4);
    }
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1C30;
    }
}

loc_801D1C5C:
{
    r3 = (r3 + r7);
    r5 = (r5 - r7);
}

loc_801D1C64:
{
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r6 = (r6_rot_4 & 1073741823);
}

loc_801D1C68:
{
    r7 = r3;
    r0 = (r5 & 3);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D1C84;
    }
}

loc_801D1C74:
{
    ctr = r6;
}

loc_801D1C78:
{
    MemoryInline::FlatWrite32(r7, r4);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1C78;
    }
}

loc_801D1C84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801D1C88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801D1C8C:
{
    ctr = r0;
}

loc_801D1C90:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r4));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D1C90;
    }
}

loc_801D1C9C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D1BA0 func_801D1BA0 preserves=true fpr_mask=0x00000000
