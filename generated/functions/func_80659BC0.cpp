#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80659BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80659BC0;

loc_80659BC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 10528), 0, 20u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 10544), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 10540), r0);
    }
    r0 = MemoryInline::FlatRead32((r4 + 8472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80659BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80659C5C;
    }
}

loc_80659BF0:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80664B34u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 10528), 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r31 + 10528), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r31 + 10529), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r31 + 10530), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r31 + 10531), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r31 + 10532), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r31 + 10533), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r31 + 10534), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r31 + 10535), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r31 + 10536), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r31 + 10537), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r31 + 10538), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r31 + 10539), static_cast<uint8_t>(r0));
    goto loc_80659D0C;
}

loc_80659C5C:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 8448));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80659C68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80659CD8;
    }
}

loc_80659C6C:
{
    r3 = r0;
    // inline leaf 0x806604CC (2 guest instruction(s))
    r3 = (r3 + 48);
    // end of inlined leaf 0x806604CC
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 10528), 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r31 + 10528), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r31 + 10529), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r31 + 10530), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r31 + 10531), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r31 + 10532), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r31 + 10533), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r31 + 10534), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r31 + 10535), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r31 + 10536), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r31 + 10537), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r31 + 10538), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r31 + 10539), static_cast<uint8_t>(r0));
    goto loc_80659D0C;
}

loc_80659CD8:
{
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 10528), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 10529), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 10530), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 10531), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 10532), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 10533), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 10534), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 10535), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10536), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 10537), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 10538), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 10539), static_cast<uint8_t>(r0));
}

loc_80659D0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80659BC0 func_80659BC0 preserves=true fpr_mask=0x00000000
