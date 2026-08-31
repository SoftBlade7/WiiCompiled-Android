#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DE1E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806DE1E4;

loc_806DE1E4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 1176);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 188), 0, 68u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 188));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 220));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_806DE220:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_806DE230;
    }
}

loc_806DE228:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 184), r0);
}

loc_806DE230:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 188));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 228));
}

loc_806DE23C:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_806DE2B0;
    }
}

loc_806DE240:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 232));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_806DE248:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806DE2B0;
    }
}

loc_806DE24C:
{
    r0 = (r0 - r4);
    r5 = (r5 - r4);
    r4 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r3 + 248));
    r0 = (r5 * r5);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r30 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat64((r30 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = (-(f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 224), f0.d);
    goto loc_806DE3CC;
}

loc_806DE2B0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 232));
}

loc_806DE2B8:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_806DE328;
    }
}

loc_806DE2BC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 236));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_806DE2C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806DE328;
    }
}

loc_806DE2C8:
{
    r0 = (r4 - r0);
    r5 = (r5 - r4);
    r4 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r3 + 248));
    r0 = (r5 * r5);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 252));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r30 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat64((r30 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 224), f0.d);
    goto loc_806DE3CC;
}

loc_806DE328:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 236));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_806DE330:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806DE3CC;
    }
}

loc_806DE334:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 240));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_806DE33C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806DE3CC;
    }
}

loc_806DE340:
{
    r4 = (r0 - r6);
    r0 = (r5 - r6);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f6.d = MemoryInline::FlatReadFloat64((r30 + 56));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f7.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f5.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r3 + 244));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = PpcFmulsInline(f8.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 252));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 224), f0.d);
}

loc_806DE3CC:
{
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 224));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x800001FF fpr_write=0x800001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806DE1E4 func_806DE1E4 preserves=false fpr_mask=0x80000000
