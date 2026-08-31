#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807834A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807834A0;

loc_807834A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 12008));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807834BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078352C;
    }
}

loc_807834C0:
{
    r3 = 64;
    ctx->lr = 0x807834C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807834CC:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783524;
    }
}

loc_807834D4:
{
    ctx->lr = 0x807834D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808D0000u;
    r3 = 0x808A0000u;
    r4 = (r4 + 5984);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18368));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r31 + 16), static_cast<uint8_t>(r4));
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r31 + 17), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 24), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 40), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 44), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + 52), r4);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r31 + 56), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 60), r4);
}

loc_80783524:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 12008), r31);
}

loc_8078352C:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 12008));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807834A0 func_807834A0 preserves=true fpr_mask=0x00000000
