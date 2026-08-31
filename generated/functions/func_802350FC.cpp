#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802350FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802350FC;

loc_802350FC:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r0 = MemoryInline::FlatRead8((r13 + -23848));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80235134;
    }
}

loc_80235114:
{
    r5 = 0x80380000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24884));
    r4 = (r5 + 17312);
    r0 = 1;
    MemoryInline::FlatWriteRamFloat32((r5 + 17312), f0.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    MemoryInline::FlatWrite8((r13 + -23848), static_cast<uint8_t>(r0));
}

loc_80235134:
{
    r0 = MemoryInline::FlatRead8((r13 + -23847));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80235158;
    }
}

loc_80235140:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24888));
    r4 = (r13 + -23840);
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r13 + -23840), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    MemoryInline::FlatWrite8((r13 + -23847), static_cast<uint8_t>(r0));
}

loc_80235158:
{
    r4 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x80235164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8023D448u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead16((r1 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80235170:
{
    r0 = (r3 | 64);
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023518C;
    }
}

loc_8023517C:
{
    r3 = (r0 | 1);
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 60), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8023518C:
{
    r3 = 0x80380000u;
    r4 = (r13 + -23840);
    r5 = (r3 + 17312);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 17312));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -24888));
    r0 = 0;
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24884));
    r3 = (r1 + 8);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -23840));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 32), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 36), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r1 + 48), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r1 + 52), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r1 + 56), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 44), f0.d);
    }
    ctx->lr = 0x802351E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023D4E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC0273E gpr_write=0xFFC00FFB gpr_return=0x00000018 fpr_read=0xFF003F81 fpr_write=0xFF0003FF fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802350FC func_802350FC preserves=true fpr_mask=0x00000000
