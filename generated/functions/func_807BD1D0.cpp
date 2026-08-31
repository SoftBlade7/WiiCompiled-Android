#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BD1D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807BD1D0;

loc_807BD1D0:
{
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = 0x808A0000u;
    r5 = (r5 + 14520);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    r4 = (r4 + 26264);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 29u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_807BD1F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(12))) {
        goto loc_807BD214;
    }
}

loc_807BD1FC:
{
    r3 = 0x808D0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 10176);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x807BD284u:
        goto loc_807BD284;
        break;
    case 0x807BD29Cu:
        goto loc_807BD29C;
        break;
    case 0x807BD214u:
        goto loc_807BD214;
        break;
    case 0x807BD230u:
        goto loc_807BD230;
        break;
    case 0x807BD24Cu:
        goto loc_807BD24C;
        break;
    case 0x807BD268u:
        goto loc_807BD268;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_807BD214:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r0));
    goto loc_807BD2B4;
}

loc_807BD230:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r3));
    goto loc_807BD2B4;
}

loc_807BD24C:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r3));
    goto loc_807BD2B4;
}

loc_807BD268:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r3));
    goto loc_807BD2B4;
}

loc_807BD284:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r0));
    goto loc_807BD2B4;
}

loc_807BD29C:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 4), static_cast<uint8_t>(r0));
}

loc_807BD2B4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 1);
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(37));
}

loc_807BD2D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD2F0;
    }
}

loc_807BD2D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(40));
}

loc_807BD2D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD2FC;
    }
}

loc_807BD2DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_807BD2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD308;
    }
}

loc_807BD2E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(33));
}

loc_807BD2E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD314;
    }
}

loc_807BD2EC:
{
    goto loc_807BD320;
}

loc_807BD2F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
    goto loc_807BD328;
}

loc_807BD2FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
    goto loc_807BD328;
}

loc_807BD308:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
    goto loc_807BD328;
}

loc_807BD314:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
    goto loc_807BD328;
}

loc_807BD320:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
}

loc_807BD328:
{
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    r0_subfic_ra_0 = r0;
    r0 = (29 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(29) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r5 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807BD1D0 func_807BD1D0 preserves=true fpr_mask=0x00000000
