#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80145AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
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

    goto loc_80145AF8;

loc_80145AF8:
{
    r0 = 0;
    r9 = 5;
    r8 = 12;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 11u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 4), static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80145B0C:
{
    r0 = r6;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 8), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 9), static_cast<uint8_t>(r8));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80145C9C;
    }
}

loc_80145B1C:
{
    r8 = (r7 + 5);
    r9 = (r7 + 2);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 2), static_cast<uint16_t>(r8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
}

loc_80145B2C:
{
    r8 = (r3 + 13);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 12), static_cast<uint8_t>(r5));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80145B84;
    }
}

loc_80145B40:
{
    r4 = MemoryInline::FlatRead8((r6 + 2));
    r0 = (r7 + -6);
    r7 = (r0 & 255);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r4));
    r0 = (r6 + 6);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 5));
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 4));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r4));
    r8 = (r8 + 6);
    goto loc_80145BCC;
}

loc_80145B84:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
}

loc_80145B88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80145BCC;
    }
}

loc_80145B8C:
{
    r4 = MemoryInline::FlatRead8((r6 + 5));
    r0 = (r7 + -6);
    r7 = (r0 & 255);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r4));
    r0 = (r6 + 6);
    r4 = MemoryInline::FlatRead8((r6 + 4));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r4));
    r8 = (r8 + 6);
}

loc_80145BCC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80145BD0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80145CB0;
    }
}

loc_80145BD4:
{
    r9 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80145CB0;
    }
}

loc_80145BDC:
{
}

loc_80145BE0:
{
    r5 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_80145C70;
    }
}

loc_80145BE8:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80145C04;
    }
}

loc_80145BF0:
{
    r4 = 0x80000000u;
    r4 = (r4 + -2);
}

loc_80145BFC:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r4))) {
        goto loc_80145C04;
    }
}

loc_80145C00:
{
    r6 = 1;
}

loc_80145C04:
{
}

loc_80145C08:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80145C70;
    }
}

loc_80145C0C:
{
    r4 = (r5 + 7);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 536870911);
    ctr = r4;
}

loc_80145C1C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80145C70;
    }
}

loc_80145C20:
{
    r9_addr_2 = (r9 + r0);
    r4 = MemoryInline::FlatRead8(r9_addr_2);
    r5 = (r0 + r9);
    r9 = (r9 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r8, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r8, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r8 + 1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r8 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r8 + 3), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r8 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r8 + 5), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r8 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r8 + 7), static_cast<uint8_t>(r4));
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80145C20;
    }
}

loc_80145C70:
{
    r4 = (r7 - r9);
    r5 = (r0 + r9);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r7));
}

loc_80145C80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80145CB0;
    }
}

loc_80145C84:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80145C84;
    }
}

loc_80145C98:
{
    goto loc_80145CB0;
}

loc_80145C9C:
{
    r5 = 4;
    r0 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 2), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 11), static_cast<uint8_t>(r4));
}

loc_80145CB0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80142664u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF00013FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80145AF8 func_80145AF8 preserves=true fpr_mask=0x00000000
