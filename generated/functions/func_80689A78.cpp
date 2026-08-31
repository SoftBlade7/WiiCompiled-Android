#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80689A78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80689A78;

loc_80689A78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + -11336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x806884ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 172), 0, 48u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    f1.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 196));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 196));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 196));
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 172));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 196));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 204));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80689AF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80689B00;
    }
}

loc_80689AFC:
{
    goto loc_80689B2C;
}

loc_80689B00:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r31 + 216));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r3 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 24));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
}

loc_80689B2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r5 = 4;
    r4 = 48;
    goto loc_80689B60;
}

loc_80689B44:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 196));
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r31 + 172));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r0 + r4);
    r4 = (r4 + 12);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_80689B60:
{
    r0 = MemoryInline::FlatRead32((r31 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80689B68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80689B44;
    }
}

loc_80689B6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003F gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80689A78 func_80689A78 preserves=true fpr_mask=0x00000000
