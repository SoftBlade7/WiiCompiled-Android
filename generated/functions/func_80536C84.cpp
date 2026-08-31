#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80536C84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_not_7 = 0;
    uint32_t r0_not_8 = 0;
    uint32_t r0_not_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80536C84;

loc_80536C84:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r7 = MemoryInline::FlatRead8((r3 + 8));
    r6 = 1127219200;
    r5 = 0x809C0000u;
    r27 = r3;
    r0 = (r7 * 240);
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r28 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r6);
    r29 = 0;
    r3 = (r5 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 46));
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80536CE4;
    }
}

loc_80536CD0:
{
    r3 = 0x809C0000u;
    r0 = (r4 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r29 = (r3 + 4);
}

loc_80536CE4:
{
    r3 = 0x809C0000u;
    r4 = r7;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r30 = 0x80890000u;
    r31 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 448));
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 444));
    r6 = MemoryInline::FlatRead32((r3 + 56));
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r6 + 8));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead32((r6 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 448));
    r30 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 444));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r4 = 0x809C0000u;
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_80536D78:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80536D84;
    }
}

loc_80536D7C:
{
}

loc_80536D80:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80536DB0;
    }
}

loc_80536D84:
{
}

loc_80536D88:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80536D94;
    }
}

loc_80536D8C:
{
}

loc_80536D90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80536DB0;
    }
}

loc_80536D94:
{
}

loc_80536D98:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(9))) {
        goto loc_80536DA4;
    }
}

loc_80536D9C:
{
}

loc_80536DA0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10))) {
        goto loc_80536F08;
    }
}

loc_80536DA4:
{
}

loc_80536DA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80536F08;
    }
}

loc_80536DAC:
{
    goto loc_80536FA8;
}

loc_80536DB0:
{
    r5 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -28012));
    r0 = (r3 + -31073);
}

loc_80536DC4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80536DD0;
    }
}

loc_80536DC8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -28012), r0);
}

loc_80536DD0:
{
}

loc_80536DD4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80536E24;
    }
}

loc_80536DD8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80536DE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536DF8;
    }
}

loc_80536DE4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80536DF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80536DFC;
}

loc_80536DF8:
{
    r3 = -1;
}

loc_80536DFC:
{
}

loc_80536E00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80536E24;
    }
}

loc_80536E04:
{
    r5 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -28004));
    r0 = (r3 + -31073);
}

loc_80536E18:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80536E24;
    }
}

loc_80536E1C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -28004), r0);
}

loc_80536E24:
{
    r0 = MemoryInline::FlatRead8((r27 + 32));
}

loc_80536E2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80536E50;
    }
}

loc_80536E30:
{
    r5 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -27976));
    r0 = (r3 + -31073);
}

loc_80536E44:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80536E50;
    }
}

loc_80536E48:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -27976), r0);
}

loc_80536E50:
{
    r4 = 0x809C0000u;
    r3 = (r28 + 65536);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_80536E70:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(65535))) {
        goto loc_80536E7C;
    }
}

loc_80536E74:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -27836), static_cast<uint16_t>(r0));
}

loc_80536E7C:
{
    r4 = (r28 + 65536);
    r3 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -27968));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 452));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80536E90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80536EC0;
    }
}

loc_80536E94:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r31);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 368));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80536EB0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80536EB8;
    }
}

loc_80536EB4:
{
    f0.d = f2.d;
}

loc_80536EB8:
{
    r3 = (r28 + 65536);
    MemoryInline::FlatWriteFloat32((r3 + -27968), f0.d);
}

loc_80536EC0:
{
    r4 = (r28 + 65536);
    r3 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -27964));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 452));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80536ED4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80536FA8;
    }
}

loc_80536ED8:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r30);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 368));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80536EF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80536EFC;
    }
}

loc_80536EF8:
{
    f0.d = f2.d;
}

loc_80536EFC:
{
    r3 = (r28 + 65536);
    MemoryInline::FlatWriteFloat32((r3 + -27964), f0.d);
    goto loc_80536FA8;
}

loc_80536F08:
{
    r5 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -28008));
    r0 = (r3 + -31073);
}

loc_80536F1C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80536F28;
    }
}

loc_80536F20:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -28008), r0);
}

loc_80536F28:
{
}

loc_80536F2C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80536F7C;
    }
}

loc_80536F30:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80536F38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536F50;
    }
}

loc_80536F3C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80536F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80536F54;
}

loc_80536F50:
{
    r3 = -1;
}

loc_80536F54:
{
}

loc_80536F58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80536F7C;
    }
}

loc_80536F5C:
{
    r5 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -28000));
    r0 = (r3 + -31073);
}

loc_80536F70:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80536F7C;
    }
}

loc_80536F74:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -28000), r0);
}

loc_80536F7C:
{
    r4 = 0x809C0000u;
    r3 = (r28 + 65536);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r4 + -27836));
}

loc_80536F9C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(65535))) {
        goto loc_80536FA8;
    }
}

loc_80536FA0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -27836), static_cast<uint16_t>(r0));
}

loc_80536FA8:
{
    r4 = (r28 + 65536);
    r3 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -27972));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 452));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80536FBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80536FEC;
    }
}

loc_80536FC0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r30);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 368));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80536FDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80536FE4;
    }
}

loc_80536FE0:
{
    f0.d = f2.d;
}

loc_80536FE4:
{
    r3 = (r28 + 65536);
    MemoryInline::FlatWriteFloat32((r3 + -27972), f0.d);
}

loc_80536FEC:
{
    r4 = (r28 + 65536);
    r3 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -27964));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 452));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80537000:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80537030;
    }
}

loc_80537004:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r30);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 368));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80537020:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80537028;
    }
}

loc_80537024:
{
    f0.d = f2.d;
}

loc_80537028:
{
    r3 = (r28 + 65536);
    MemoryInline::FlatWriteFloat32((r3 + -27964), f0.d);
}

loc_80537030:
{
    r4 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -27988));
    r3 = (r3 + -31073);
}

loc_80537044:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8053706C;
    }
}

loc_80537048:
{
    r0 = (r3 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0 = 0;
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r0);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_2 = ~(r3);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r3);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80537064;
    }
}

loc_80537060:
{
    r4 = r3;
}

loc_80537064:
{
    r3 = (r28 + 65536);
    MemoryInline::FlatWrite32((r3 + -27988), r4);
}

loc_8053706C:
{
    r4 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -27984));
    r3 = (r3 + -31073);
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80537084:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_805370B0;
    }
}

loc_80537088:
{
    r5 = (r4 + r0);
    r4 = 0;
    r0 = (r3 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0_not_4 = ~(r4);
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_not_4 + r4);
    r0 = (r0 + r0_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_5 = ~(r3);
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_not_5 + r3);
    r0 = (r0 + r0_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805370A8;
    }
}

loc_805370A4:
{
    r5 = r3;
}

loc_805370A8:
{
    r3 = (r28 + 65536);
    MemoryInline::FlatWrite32((r3 + -27984), r5);
}

loc_805370B0:
{
    r4 = (r28 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -27980));
    r3 = (r3 + -31073);
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_805370C8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_805370F4;
    }
}

loc_805370CC:
{
    r5 = (r4 + r0);
    r4 = 0;
    r0 = (r3 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0_not_7 = ~(r4);
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_not_7 + r4);
    r0 = (r0 + r0_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_8 = ~(r3);
    r0_ca_8 = (xer >> 29) & 1u;
    r0 = (r0_not_8 + r3);
    r0 = (r0 + r0_ca_8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_8)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_8)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805370EC;
    }
}

loc_805370E8:
{
    r5 = r3;
}

loc_805370EC:
{
    r3 = (r28 + 65536);
    MemoryInline::FlatWrite32((r3 + -27980), r5);
}

loc_805370F4:
{
    r0 = MemoryInline::FlatRead8((r27 + 8));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 52));
    r3 = r29;
    // inline leaf 0x805275EC (6 guest instruction(s))
}

loc_inl2_0x805275EC:
{
    r0 = (r3 + -24);
    r3 = 0;
}

loc_inl2_0x805275F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x805275FC:
{
    r3 = 1;
    goto loc_inl2_cont_805275EC;
}

loc_inl2_return:
{
}

loc_inl2_cont_805275EC:
{
    // end of inlined leaf 0x805275EC
}

loc_80537118:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80537120;
    }
}

loc_8053711C:
{
    r29 = 24;
}

loc_80537120:
{
    r3 = (r28 + 65536);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r4 + -27958));
}

loc_80537134:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(65535))) {
        goto loc_80537140;
    }
}

loc_80537138:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -27958), static_cast<uint16_t>(r0));
}

loc_80537140:
{
    r0 = MemoryInline::FlatRead8((r27 + 8));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r28 + 65536);
    r0 = (r0 * 240);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 48));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r4 + -27908));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_8053716C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80537178;
    }
}

loc_80537170:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + -27908), static_cast<uint16_t>(r0));
}

loc_80537178:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80536C84 func_80536C84 preserves=true fpr_mask=0x00000000
