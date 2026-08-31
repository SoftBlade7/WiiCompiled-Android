#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008D740(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008D740;

loc_8008D740:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r4 = r5;
    r5 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r6 = r7;
    ctx->lr = 0x8008D76Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008D630u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008D770:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D77C;
    }
}

loc_8008D774:
{
    r3 = 0;
    goto loc_8008D8C8;
}

loc_8008D77C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
}

loc_8008D784:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8008D7B0;
    }
}

loc_8008D788:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008D790:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8008D79C;
    }
}

loc_8008D794:
{
    r3 = 0;
    goto loc_8008D8C8;
}

loc_8008D79C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8008D818;
}

loc_8008D7B0:
{
}

loc_8008D7B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8008D7E0;
    }
}

loc_8008D7B8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008D7C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D7CC;
    }
}

loc_8008D7C4:
{
    r3 = 0;
    goto loc_8008D8C8;
}

loc_8008D7CC:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8008D818;
}

loc_8008D7E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8008D7E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D810;
    }
}

loc_8008D7E8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008D7F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D7FC;
    }
}

loc_8008D7F4:
{
    r3 = 0;
    goto loc_8008D8C8;
}

loc_8008D7FC:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8008D818;
}

loc_8008D810:
{
    r3 = 0;
    goto loc_8008D8C8;
}

loc_8008D818:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 22), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead16((r4 + 6));
}

loc_8008D85C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(257))) {
        goto loc_8008D874;
    }
}

loc_8008D860:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 23), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 24), f0.d);
    goto loc_8008D884;
}

loc_8008D874:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28728));
    r0 = 127;
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 24), f0.d);
}

loc_8008D884:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008D88C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008D89C;
    }
}

loc_8008D890:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8008D894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008D8A8;
    }
}

loc_8008D898:
{
    goto loc_8008D8B4;
}

loc_8008D89C:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 16), r0);
    goto loc_8008D8BC;
}

loc_8008D8A8:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 16), r0);
    goto loc_8008D8BC;
}

loc_8008D8B4:
{
    r3 = 0;
    goto loc_8008D8C8;
}

loc_8008D8BC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    r3 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 20), static_cast<uint8_t>(r0));
}

loc_8008D8C8:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FF gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008D740 func_8008D740 preserves=true fpr_mask=0x00000000
