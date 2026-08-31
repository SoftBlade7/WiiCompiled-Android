#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065FE8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065FE8C;

loc_8065FE8C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 8448));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065FEAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065FF4C;
    }
}

loc_8065FEB0:
{
    r3 = 1016;
    ctx->lr = 0x8065FEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065FEBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065FF44;
    }
}

loc_8065FEC0:
{
    MemoryInline::FlatWriteRam32(r3, r31);
    r0 = 0;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 992), r0);
    MemoryInline::FlatWriteRam32((r3 + 996), r0);
    MemoryInline::FlatWriteRam32((r3 + 1000), r0);
    MemoryInline::FlatWriteRam32((r3 + 1004), r0);
    MemoryInline::FlatWriteRam32((r3 + 1008), r0);
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 10592), 0, 96u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 10596), r0);
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 10592), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 10604), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 10600), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 10612), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 10608), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 10620), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 10616), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 10628), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 10624), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 10636), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 10632), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 10644), r0);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 10640), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 10652), r0);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 10648), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 10660), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 10656), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r4 + 10668), r0);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 10664), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r4 + 10676), r0);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 10672), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r4 + 10684), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r4 + 10680), r0);
    }
}

loc_8065FF44:
{
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r4 + 8448), r3);
}

loc_8065FF4C:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065FE8C func_8065FE8C preserves=true fpr_mask=0x00000000
