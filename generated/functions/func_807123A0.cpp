#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807123A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807123A0;

loc_807123A0:
{
    r3 = r5;
    r4 = 0;
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r3 = (r3 & 255);
    ctx->lr = 0x807123B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078CFA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
    r29 = 2;
}

loc_807123C0:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_807123CC;
    }
}

loc_807123C4:
{
}

loc_807123C8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807123D4;
    }
}

loc_807123CC:
{
    r3 = 110;
    goto loc_807123EC;
}

loc_807123D4:
{
    r0 = (r29 * 12);
    r4 = 0x808A0000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r4 = (r4 + 7832);
    r0 = (r4 + r0);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_807123EC:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10320));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r4 + -46);
}

loc_80712400:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80712408;
    }
}

loc_80712404:
{
    r3 = (r3 + 1);
}

loc_80712408:
{
    r0 = (r3 + -112);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80712410:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80712438;
    }
}

loc_80712414:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712438;
    }
}

loc_80712428:
{
    r0 = MemoryInline::FlatRead32((r31 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80712430:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712438;
    }
}

loc_80712434:
{
    r3 = 111;
}

loc_80712438:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8001FFB gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807123A0 func_807123A0 preserves=true fpr_mask=0x00000000
