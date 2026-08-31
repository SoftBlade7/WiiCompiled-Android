#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CAFB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_806CAFB8;

loc_806CAFB8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + -1560));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r30 = -1;
    r4 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 36));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f2.d);
    }
    f2.d = MemoryInline::FlatReadFloat32((r3 + 296));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 288));
    r3 = (r1 + 24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f0.d);
    ctx->lr = 0x806CB00Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243A78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 16);
    ctx->lr = 0x806CB014u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243A78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -1348));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CB03C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CB08C;
    }
}

loc_806CB040:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + -1560));
    f3.d = PpcFmulsInline(f5.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CB07C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CB088;
    }
}

loc_806CB080:
{
    r30 = 1;
    goto loc_806CB08C;
}

loc_806CB088:
{
    r30 = 2;
}

loc_806CB08C:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000E gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CAFB8 func_806CAFB8 preserves=true fpr_mask=0x00000000
