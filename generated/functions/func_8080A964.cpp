#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080A964(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080A964;

loc_8080A964:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r8 = 1127219200;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r31);
    r31 = r3;
    r7 = MemoryInline::FlatRead32((r5 + -10448));
    r5 = 0x808B0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 260), 0, 36u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 260));
    r5 = (r5 + -20376);
    r7 = MemoryInline::FlatRead32((r7 + 32));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 264));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r0);
    r7 = (r7 - r4);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 268));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 292));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 280));
    r4 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r8);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r8);
    r4 = (r4 * r6);
    r8 = (r7 - r4);
}

loc_8080A9CC:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8080A9D8;
    }
}

loc_8080A9D0:
{
    r6 = 0;
    goto loc_8080AA08;
}

loc_8080A9D8:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r4 = (r0 + r7);
}

loc_8080A9E4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_8080A9F0;
    }
}

loc_8080A9E8:
{
    r6 = 1;
    goto loc_8080AA08;
}

loc_8080A9F0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r6 = 3;
    r4 = (r4 + r7);
}

loc_8080AA00:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_8080AA08;
    }
}

loc_8080AA04:
{
    r6 = 2;
}

loc_8080AA08:
{
}

loc_8080AA0C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8080AA2C;
    }
}

loc_8080AA10:
{
}

loc_8080AA14:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_8080AA60;
    }
}

loc_8080AA18:
{
}

loc_8080AA1C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8080AA68;
    }
}

loc_8080AA20:
{
}

loc_8080AA24:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_8080AB58;
    }
}

loc_8080AA28:
{
    goto loc_8080AC4C;
}

loc_8080AA2C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r4 = 1;
}

loc_8080AA38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8080AA40;
    }
}

loc_8080AA3C:
{
    r4 = -1;
}

loc_8080AA40:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f4.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8080AC50;
}

loc_8080AA60:
{
    f4.d = MemoryInline::FlatReadFloat32(r5);
    goto loc_8080AC50;
}

loc_8080AA68:
{
}

loc_8080AA6C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8080AA88;
    }
}

loc_8080AA70:
{
    r4 = (r8 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080AB00;
}

loc_8080AA88:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r9 = (r0 + r7);
}

loc_8080AA94:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r9))) {
        goto loc_8080AAB4;
    }
}

loc_8080AA98:
{
    r4 = (r8 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080AB00;
}

loc_8080AAB4:
{
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & -2);
    r4 = (r6 + r7);
}

loc_8080AAC0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_8080AAE0;
    }
}

loc_8080AAC4:
{
    r4 = (r8 - r9);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080AB00;
}

loc_8080AAE0:
{
    r4 = (0 - r6);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    r4 = (r4 - r7);
    r4 = (r4 + r8);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080AB00:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r6 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8080AB14:
{
    r4 = MemoryInline::FlatRead32((r1 + 44));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080AB20;
    }
}

loc_8080AB1C:
{
    r6 = -1;
}

loc_8080AB20:
{
    r4 = (r4 * r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f3.d = MemoryInline::FlatReadFloat64((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8080AC50;
}

loc_8080AB58:
{
}

loc_8080AB5C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8080AB78;
    }
}

loc_8080AB60:
{
    r4 = (r8 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080ABF0;
}

loc_8080AB78:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 284));
    r9 = (r0 + r7);
}

loc_8080AB84:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r9))) {
        goto loc_8080ABA4;
    }
}

loc_8080AB88:
{
    r4 = (r8 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080ABF0;
}

loc_8080ABA4:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r4 = (r6 + r7);
}

loc_8080ABB0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_8080ABD0;
    }
}

loc_8080ABB4:
{
    r4 = (r8 - r9);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080ABF0;
}

loc_8080ABD0:
{
    r4 = (0 - r6);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    r4 = (r4 - r7);
    r4 = (r4 + r8);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080ABF0:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 272));
    r6 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8080AC04:
{
    r4 = MemoryInline::FlatRead32((r1 + 44));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080AC10;
    }
}

loc_8080AC0C:
{
    r6 = -1;
}

loc_8080AC10:
{
    r4 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    r4 = (r6 * r4);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f3.d = MemoryInline::FlatReadFloat64((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_8080AC50;
}

loc_8080AC4C:
{
    f4.d = MemoryInline::FlatReadFloat32(r5);
}

loc_8080AC50:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8080AC58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080AC64;
    }
}

loc_8080AC5C:
{
    f4.d = f0.d;
    goto loc_8080AC74;
}

loc_8080AC64:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 28));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8080AC6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8080AC74;
    }
}

loc_8080AC70:
{
    f4.d = f0.d;
}

loc_8080AC74:
{
    f2.d = std::fabs(f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 28));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8080AC90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080AC98;
    }
}

loc_8080AC94:
{
    goto loc_8080AC9C;
}

loc_8080AC98:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8080AC9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 36));
    r4 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 40));
    r5 = (r31 + 48);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    r3 = (r3 + 300);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->lr = 0x8080ACC0u;
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
    r3 = (r31 + 300);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

// RECOMP_GUEST_ABI gpr_read=0xE00003FF gpr_write=0xE00003FB gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080A964 func_8080A964 preserves=true fpr_mask=0x00000000
