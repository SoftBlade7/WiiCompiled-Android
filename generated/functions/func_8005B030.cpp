#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8005B030;

loc_8005B030:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 96);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32(r3);
    r28 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    r27 = r4;
    r4 = r28;
    r3 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8005AF90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r30 = MemoryInline::FlatRead32((r28 + 4));
    r31 = (r28 + 172);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29656));
    r29 = 8;
    goto loc_8005B1B4;
}

loc_8005B07C:
{
    r0 = (r30 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005B080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005B1A8;
    }
}

loc_8005B084:
{
    r5 = r31;
    r3 = (r1 + 16);
    r6 = (r30 & 15);
    r4 = 1;
    ctx->lr = 0x8005B098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80067860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8005B0A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005B0AC;
    }
}

loc_8005B0A8:
{
    goto loc_8005B0B0;
}

loc_8005B0AC:
{
    f1.d = f31.d;
}

loc_8005B0B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8005B0BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005B0C4;
    }
}

loc_8005B0C0:
{
    goto loc_8005B0C8;
}

loc_8005B0C4:
{
    f2.d = f1.d;
}

loc_8005B0C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8005B0D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005B0DC;
    }
}

loc_8005B0D8:
{
    goto loc_8005B0E0;
}

loc_8005B0DC:
{
    f1.d = f2.d;
}

loc_8005B0E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8005B0EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005B0F4;
    }
}

loc_8005B0F0:
{
    goto loc_8005B0F8;
}

loc_8005B0F4:
{
    f2.d = f1.d;
}

loc_8005B0F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8005B104:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005B10C;
    }
}

loc_8005B108:
{
    goto loc_8005B110;
}

loc_8005B10C:
{
    f1.d = f2.d;
}

loc_8005B110:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8005B11C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005B124;
    }
}

loc_8005B120:
{
    goto loc_8005B128;
}

loc_8005B124:
{
    f0.d = f1.d;
}

loc_8005B128:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -29648));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r3 = (r3_rot_2 & 255);
    r0 = (r3 + -126);
    r28 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (0 - r28);
    ctx->lr = 0x8005B148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001B830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = r27;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r6 = r28;
    f5.d = PpcFmulsInline(f1.d, f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f4.d = PpcFmulsInline(f0.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f3.d = PpcFmulsInline(f3.d, f6.d);
    f2.d = PpcFmulsInline(f2.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f5.d);
    f1.d = PpcFmulsInline(f1.d, f6.d);
    r4 = (r29 + -7);
    f0.d = PpcFmulsInline(f0.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    r5 = (r1 + 16);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->lr = 0x8005B1A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80051580u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_8005B1A8:
{
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(28));
    r30 = (r30_rot_2 & 268435455);
    r31 = (r31 + 20);
    r29 = (r29 + 1);
}

loc_8005B1B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8005B1B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005B07C;
    }
}

loc_8005B1BC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80007FF gpr_write=0xF8000FFB gpr_return=0x00000018 fpr_read=0x8000C1FF fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005B030 func_8005B030 preserves=false fpr_mask=0x80000000
