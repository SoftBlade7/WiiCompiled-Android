#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FF83C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807FF83C;

loc_807FF83C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r6 + -10448));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 264), 0, 136u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 276));
    r6 = MemoryInline::FlatRead32((r6 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 280));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = (r6 - r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 284));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r3 + 396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r7));
}

loc_807FF880:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FF88C;
    }
}

loc_807FF884:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 268));
    goto loc_807FF8E0;
}

loc_807FF88C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 264));
    r0 = 1127219200;
    r5 = 0x808B0000u;
    r4 = 0x808D0000u;
    r6 = (r7 - r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = (r6 * r6);
    f4.d = MemoryInline::FlatReadFloat64((r5 + -21152));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 19256));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 272));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 268));
        }
    }
    r0 = (r0 * r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807FF8D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FF8E0;
    }
}

loc_807FF8DC:
{
    f1.d = f0.d;
}

loc_807FF8E0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = (r3 + 348);
    r4 = (r1 + 8);
    r5 = (r31 + 48);
    ctx->lr = 0x807FF8F4u;
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
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r31 + 348);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FF gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807FF83C func_807FF83C preserves=true fpr_mask=0x00000000
