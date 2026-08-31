#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074E030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8074E030;

loc_8074E030:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r7 = (r7 + 12000);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 624), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r7 + 648));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8074E050:
{
    f5.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 208));
    MemoryInline::FlatWriteFloat32((r3 + 224), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 208));
    MemoryInline::FlatWriteFloat32((r3 + 228), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 216), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 220), f5.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074E14C;
    }
}

loc_8074E084:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 624));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8074E08C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8074E0F4;
    }
}

loc_8074E090:
{
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8074E094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8074E0F4;
    }
}

loc_8074E098:
{
    r4 = MemoryInline::FlatRead32((r3 + 264));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = (r4 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r7 + 664));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r7 + 632));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r7 + 640));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r0 = fctiwzword0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWrite32((r3 + 264), r0);
    MemoryInline::FlatWriteFloat32((r3 + 220), f0.d);
    goto loc_8074E180;
}

loc_8074E0F4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r7 + 636));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 220));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8074E100:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074E120;
    }
}

loc_8074E104:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 624));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074E10C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074E120;
    }
}

loc_8074E110:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r7 + 640));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 220), f0.d);
    goto loc_8074E180;
}

loc_8074E120:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 624));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 220));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8074E12C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074E180;
    }
}

loc_8074E130:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r7 + 652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074E138:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074E180;
    }
}

loc_8074E13C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r7 + 656));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 220), f0.d);
    goto loc_8074E180;
}

loc_8074E14C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r7 + 636));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_8074E154:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074E168;
    }
}

loc_8074E158:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r7 + 640));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 220), f0.d);
    goto loc_8074E180;
}

loc_8074E168:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r7 + 652));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8074E170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074E180;
    }
}

loc_8074E174:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r7 + 656));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 220), f0.d);
}

loc_8074E180:
{
    r0 = MemoryInline::FlatRead8((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8074E188:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074E1E0;
    }
}

loc_8074E18C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8074E190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074E1E0;
    }
}

loc_8074E194:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r7 + 660));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074E1A4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8074E1B8;
    }
}

loc_8074E1A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 216));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8074E1B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8074E1E0;
    }
}

loc_8074E1B8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8074E1C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074E1E0;
    }
}

loc_8074E1C8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 73;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8074E1E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8074E1E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8074E030 func_8074E030 preserves=true fpr_mask=0x00000000
