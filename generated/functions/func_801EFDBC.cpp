#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EFDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EFDBC;

loc_801EFDBC:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    r31 = r4;
    r4 = (r1 + 8);
    ctx->lr = 0x801EFDD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F09B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EFDDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EFDE8;
    }
}

loc_801EFDE0:
{
    r3 = 7;
    goto loc_801EFE94;
}

loc_801EFDE8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 104u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r1 + 16));
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 56u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r1 + 20));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r1 + 22));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r1 + 18));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r1 + 19));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r1 + 112));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r1 + 116));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 76));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 16), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 64u, (r1 + 80));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r31 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 66u, (r1 + 82));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r31 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 56u, (r1 + 72));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r31 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r1 + 42));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r31 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r1 + 88));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 28), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 76u, (r1 + 92));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r31 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 77u, (r1 + 93));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r31 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 71u, (r1 + 87));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r31 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 78u, (r1 + 94));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r31 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r1 + 96));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r1 + 100));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r1 + 104));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r1 + 108));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + 52), r0);
}

loc_801EFE94:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00004FB gpr_write=0xE00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EFDBC func_801EFDBC preserves=true fpr_mask=0x00000000
