#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80752704(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80752704;

loc_80752704:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    r4 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r5 = (r5 + 13048);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 52));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 240));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -16360));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 240), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8075273C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80752748;
    }
}

loc_80752740:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
}

loc_80752748:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 240));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F86Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = (r1 + 20);
    r4 = (r31 + 192);
    // inline leaf 0x80514810 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + -12), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 8));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 4));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteFloat32((r31 + 228), f0.d);
    r4 = (r31 + 180);
    r5 = (r31 + 216);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 232), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 236), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    r5 = (r31 + 228);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead32((r31 + 252));
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r0_addic_src_0 = r0;
    r0 = (r0_addic_src_0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807527A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = (r3 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r31 + 48), f2.d);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteFloat32((r31 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    MemoryInline::FlatWrite32((r31 + 252), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807527D8;
    }
}

loc_807527D0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 176), r0);
}

loc_807527D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000002F gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80752704 func_80752704 preserves=true fpr_mask=0x00000000
