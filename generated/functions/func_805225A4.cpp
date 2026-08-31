#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805225A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805225A4;

loc_805225A4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_805225B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805225BC;
    }
}

loc_805225B4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805225BC:
{
}

loc_805225C0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_805225CC;
    }
}

loc_805225C4:
{
}

loc_805225C8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(2))) {
        goto loc_805225D8;
    }
}

loc_805225CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_805225D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522670;
    }
}

loc_805225D4:
{
    // inline leaf 0x80522688 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80522688
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805225D8:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_805225E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805225F0;
    }
}

loc_805225E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805225F0:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r4 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_805225FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522608;
    }
}

loc_80522600:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80522608:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80522614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522620;
    }
}

loc_80522618:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80522620:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r4 + 7));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8052262C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522638;
    }
}

loc_80522630:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80522638:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80522644:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522650;
    }
}

loc_80522648:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80522650:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r4 + 9));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8052265C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80522668;
    }
}

loc_80522660:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80522668:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80522670:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805225A4 func_805225A4 preserves=true fpr_mask=0x00000000
