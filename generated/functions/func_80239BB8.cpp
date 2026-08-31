#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80239BB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80239BB8;

loc_80239BB8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = MemoryInline::FlatRead8((r13 + -23824));
}

loc_80239BCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80239BD8;
    }
}

loc_80239BD0:
{
    f4.d = MemoryInline::FlatReadFloat32((r13 + -27744));
    goto loc_80239BDC;
}

loc_80239BD8:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -24544));
}

loc_80239BDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80239BE4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 24));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -24544));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24524));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24540));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f3.d));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80239C1C;
    }
}

loc_80239C18:
{
    f7.d = MemoryInline::FlatReadFloat32((r13 + -27744));
}

loc_80239C1C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 28));
    r4 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 24));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -24540));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 56u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 20), f6.d);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24544));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -24524));
    f1.d = PpcFmulsInline(f0.d, f7.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24520));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 16), f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 16));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 20));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 24), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 8));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f3.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 36), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 40), f6.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 44), f6.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f2.d = (-(f4.d));
    f3.d = PpcFmulsInline(f3.d, f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 28), f3.d);
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 12));
    r3 = (r1 + 8);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 64), f0.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 56), f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 60), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 68), f6.d);
    f0.d = (-(f1.d));
    f1.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 52), f0.d);
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017301Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000200F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000012 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80239BB8 func_80239BB8 preserves=true fpr_mask=0x00000000
