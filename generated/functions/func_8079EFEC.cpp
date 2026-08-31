#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079EFEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8079EFEC;

loc_8079EFEC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20992);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r7 = MemoryInline::FlatRead32((r3 + 124));
    MemoryInline::FlatWrite32((r3 + 116), r5);
    r0 = (r7 & 32);
}

loc_8079F02C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F054;
    }
}

loc_8079F030:
{
    r0 = (r7 & 1);
}

loc_8079F034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F044;
    }
}

loc_8079F038:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 939524096);
}

loc_8079F040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F048;
    }
}

loc_8079F044:
{
    r5 = 1;
}

loc_8079F048:
{
}

loc_8079F04C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079F054;
    }
}

loc_8079F050:
{
    r6 = 1;
}

loc_8079F054:
{
}

loc_8079F058:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8079F068;
    }
}

loc_8079F05C:
{
    r0 = (r7 & 18);
}

loc_8079F060:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F068;
    }
}

loc_8079F064:
{
    r4 = 1;
}

loc_8079F068:
{
}

loc_8079F06C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079F0B0;
    }
}

loc_8079F070:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 1);
    // inline leaf 0x807D2DDC (2 guest instruction(s))
    r3 = 4;
    // end of inlined leaf 0x807D2DDC
    r0 = MemoryInline::FlatRead32((r29 + 352));
    r3 = (r0 - r3);
    r0 = (r3 + 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8079F08C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F0A8;
    }
}

loc_8079F090:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 14680064);
}

loc_8079F098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F0B0;
    }
}

loc_8079F09C:
{
    r0 = MemoryInline::FlatRead32((r29 + 352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8079F0A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F0B0;
    }
}

loc_8079F0A8:
{
    r3 = r29;
    ctx->lr = 0x8079F0B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A31C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079F0B0:
{
    r0 = MemoryInline::FlatRead32((r29 + 124));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F0B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F0C4;
    }
}

loc_8079F0BC:
{
    r3 = r29;
    ctx->lr = 0x8079F0C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079F934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079F0C4:
{
    r3 = MemoryInline::FlatRead16((r29 + 348));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8079F0CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(5))) {
        goto loc_8079F0D8;
    }
}

loc_8079F0D0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 348), static_cast<uint16_t>(r0));
}

loc_8079F0D8:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 8);
}

loc_8079F0E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F0EC;
    }
}

loc_8079F0E4:
{
    r3 = (r29 + 212);
    // inline leaf 0x807BDA7C (8 guest instruction(s))
    r4 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r4 = (r4 + 14552);
    MemoryInline::FlatWriteRam32((r4 + 768), r0);
    MemoryInline::FlatWriteRam32((r4 + 772), r0);
    MemoryInline::FlatWriteRam32((r4 + 776), r3);
    // end of inlined leaf 0x807BDA7C
}

loc_8079F0EC:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 1024);
}

loc_8079F0F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F498;
    }
}

loc_8079F0F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 68u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 320));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079F104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F1C0;
    }
}

loc_8079F108:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 104));
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 68));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8079F128:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F14C;
    }
}

loc_8079F12C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8079F13C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079F144;
    }
}

loc_8079F140:
{
    MemoryInline::FlatWriteFloat32((r29 + 104), f2.d);
}

loc_8079F144:
{
    r0 = 1;
    goto loc_8079F150;
}

loc_8079F14C:
{
    r0 = 0;
}

loc_8079F150:
{
}

loc_8079F154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F1C0;
    }
}

loc_8079F158:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 104));
    r4 = (r4 + 12104);
    r5 = (r0 * 116);
    r3 = MemoryInline::FlatRead32((r29 + 116));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 | 64);
    MemoryInline::FlatWrite32((r29 + 116), r3);
    r5 = (r4 + r5);
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r0 = (r0 * 116);
    r3 = MemoryInline::FlatRead32((r29 + 164));
    MemoryInline::FlatWriteFloat32((r29 + 96), f1.d);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r29 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_8079F498;
}

loc_8079F1C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r3 & 12);
}

loc_8079F1C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F3B4;
    }
}

loc_8079F1CC:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 104));
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 72));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8079F1EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F210;
    }
}

loc_8079F1F0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8079F200:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079F208;
    }
}

loc_8079F204:
{
    MemoryInline::FlatWriteFloat32((r29 + 104), f2.d);
}

loc_8079F208:
{
    r6 = 1;
    goto loc_8079F214;
}

loc_8079F210:
{
    r6 = 0;
}

loc_8079F214:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 320));
    r0 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8079F224:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F238;
    }
}

loc_8079F228:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079F230:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F238;
    }
}

loc_8079F234:
{
    r0 = 1;
}

loc_8079F238:
{
}

loc_8079F23C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F274;
    }
}

loc_8079F240:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 92));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8079F258:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F26C;
    }
}

loc_8079F25C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079F264:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F26C;
    }
}

loc_8079F268:
{
    r0 = 1;
}

loc_8079F26C:
{
}

loc_8079F270:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F330;
    }
}

loc_8079F274:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 320));
    r0 = MemoryInline::FlatRead32((r29 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r29 + 116), r0);
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8079F294:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F29C;
    }
}

loc_8079F298:
{
    goto loc_8079F2A0;
}

loc_8079F29C:
{
    f5.d = f0.d;
}

loc_8079F2A0:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 104));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 64));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 + 12104);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    r4 = (r0 * 116);
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r7 = 1;
    f3.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 320));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    MemoryInline::FlatWriteFloat32((r29 + 96), f5.d);
    r5 = (r3 + r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    r0 = (r0 * 116);
    MemoryInline::FlatWriteFloat32((r29 + 92), f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 100), f0.d);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r29 + 164));
    MemoryInline::FlatWriteFloat32((r29 + 320), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f4.d, f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_8079F33C;
}

loc_8079F330:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r7 = 0;
    MemoryInline::FlatWriteFloat32((r29 + 320), f0.d);
}

loc_8079F33C:
{
}

loc_8079F340:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8079F498;
    }
}

loc_8079F344:
{
}

loc_8079F348:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8079F498;
    }
}

loc_8079F34C:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 104));
    r4 = (r4 + 12104);
    r5 = (r0 * 116);
    r3 = MemoryInline::FlatRead32((r29 + 116));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 | 64);
    MemoryInline::FlatWrite32((r29 + 116), r3);
    r5 = (r4 + r5);
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r0 = (r0 * 116);
    r3 = MemoryInline::FlatRead32((r29 + 164));
    MemoryInline::FlatWriteFloat32((r29 + 96), f1.d);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r29 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_8079F498;
}

loc_8079F3B4:
{
    r0 = (r3 & 33554432);
}

loc_8079F3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F3D8;
    }
}

loc_8079F3BC:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    goto loc_8079F3F0;
}

loc_8079F3D8:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 80));
}

loc_8079F3F0:
{
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 104));
    r3 = (r3 + 12104);
    r3 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 72));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8079F408:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F428;
    }
}

loc_8079F40C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8079F418:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079F420;
    }
}

loc_8079F41C:
{
    MemoryInline::FlatWriteFloat32((r29 + 104), f2.d);
}

loc_8079F420:
{
    r0 = 1;
    goto loc_8079F42C;
}

loc_8079F428:
{
    r0 = 0;
}

loc_8079F42C:
{
}

loc_8079F430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F498;
    }
}

loc_8079F434:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 104));
    r4 = (r4 + 12104);
    r5 = (r0 * 116);
    r3 = MemoryInline::FlatRead32((r29 + 116));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 | 64);
    MemoryInline::FlatWrite32((r29 + 116), r3);
    r5 = (r4 + r5);
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r0 = (r0 * 116);
    r3 = MemoryInline::FlatRead32((r29 + 164));
    MemoryInline::FlatWriteFloat32((r29 + 96), f1.d);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r29 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_8079F498:
{
    r3 = MemoryInline::FlatRead32((r29 + 124));
    r0 = (r3 & 1);
}

loc_8079F4A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F4B8;
    }
}

loc_8079F4A4:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F4A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F4B8;
    }
}

loc_8079F4AC:
{
    r3 = r29;
    ctx->lr = 0x8079F4B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A25B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8079F4D8;
}

loc_8079F4B8:
{
    r3 = (r29 + 360);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl2_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl2_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl2_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl2_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8002140C:
{
    r3 = 0;
    goto loc_inl2_cont_800213E4;
}

loc_inl2_return:
{
}

loc_inl2_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079F4C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F4D8;
    }
}

loc_8079F4C8:
{
    r3 = r29;
    r12 = (r29 + 360);
    ctx->lr = 0x8079F4D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
}

loc_8079F4D8:
{
    r0 = MemoryInline::FlatRead32((r29 + 116));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F4E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F4EC;
    }
}

loc_8079F4E4:
{
    r3 = 1;
    goto loc_8079F898;
}

loc_8079F4EC:
{
    r0 = MemoryInline::FlatRead32((r29 + 176));
}

loc_8079F4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F564;
    }
}

loc_8079F4F8:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 8);
}

loc_8079F500:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F534;
    }
}

loc_8079F504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8079F508:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F520;
    }
}

loc_8079F50C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r29 + 176));
    r3 = MemoryInline::FlatRead32((r3 + 12016));
    r5 = 14;
    ctx->lr = 0x8079F520u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80786774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8079F520:
{
    r3 = r29;
    ctx->lr = 0x8079F528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A1C94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r29;
    ctx->lr = 0x8079F530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A1ED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8079F564;
}

loc_8079F534:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_8079F53C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_8079F564;
    }
}

loc_8079F540:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8079F544:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F55C;
    }
}

loc_8079F548:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r29 + 176));
    r3 = MemoryInline::FlatRead32((r3 + 12016));
    r5 = 12;
    ctx->lr = 0x8079F55Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80786774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8079F55C:
{
    r3 = r29;
    ctx->lr = 0x8079F564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A1ED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079F564:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 8);
}

loc_8079F56C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F584;
    }
}

loc_8079F570:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r29 + 212));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F634;
    }
}

loc_8079F584:
{
    r0 = MemoryInline::FlatRead32((r29 + 312));
    r3 = 0;
    MemoryInline::FlatWrite16((r29 + 348), static_cast<uint16_t>(r3));
    r0 = (r0 & 1024);
}

loc_8079F594:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F5B0;
    }
}

loc_8079F598:
{
    r0 = MemoryInline::FlatRead32((r29 + 212));
    r0 = (r0 & 1024);
}

loc_8079F5A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F5E8;
    }
}

loc_8079F5A4:
{
    r0 = MemoryInline::FlatRead32((r29 + 116));
    r0 = (r0 & 32);
}

loc_8079F5AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F5E8;
    }
}

loc_8079F5B0:
{
    r0 = MemoryInline::FlatRead16((r29 + 350));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8079F5B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F5E8;
    }
}

loc_8079F5BC:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_8079F5C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8079F5E8;
    }
}

loc_8079F5C8:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 8);
}

loc_8079F5D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F5E0;
    }
}

loc_8079F5D4:
{
    r0 = 180;
    MemoryInline::FlatWrite16((r29 + 350), static_cast<uint16_t>(r0));
    goto loc_8079F5E8;
}

loc_8079F5E0:
{
    r0 = 60;
    MemoryInline::FlatWrite16((r29 + 350), static_cast<uint16_t>(r0));
}

loc_8079F5E8:
{
    r3 = 552075264;
    r0 = MemoryInline::FlatRead32((r29 + 312));
    r3 = (r3 + 3583);
    r0 = (r0 & r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F634;
    }
}

loc_8079F5FC:
{
    r0 = MemoryInline::FlatRead32((r29 + 212));
    r0 = (r0 & r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F634;
    }
}

loc_8079F608:
{
    r0 = MemoryInline::FlatRead16((r29 + 350));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8079F610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F634;
    }
}

loc_8079F614:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_8079F61C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8079F634;
    }
}

loc_8079F620:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 8);
}

loc_8079F628:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F634;
    }
}

loc_8079F62C:
{
    r0 = 180;
    MemoryInline::FlatWrite16((r29 + 350), static_cast<uint16_t>(r0));
}

loc_8079F634:
{
    r0 = MemoryInline::FlatRead16((r29 + 350));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8079F63C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F688;
    }
}

loc_8079F640:
{
    r3 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r3 & 192);
}

loc_8079F648:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F688;
    }
}

loc_8079F64C:
{
    r0 = (r3 & 8);
}

loc_8079F650:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F668;
    }
}

loc_8079F654:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r29 + 212));
    r0 = (r3 + 3071);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079F688;
    }
}

loc_8079F668:
{
    r3 = MemoryInline::FlatRead16((r29 + 350));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 350), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F688;
    }
}

loc_8079F67C:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8079F688u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6C14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079F688:
{
    r4 = 0x809C0000u;
    r3 = (r29 + 212);
    r0 = MemoryInline::FlatRead32((r4 + 15328));
}

loc_8079F698:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8079F6E4;
    }
}

loc_8079F69C:
{
    r0 = MemoryInline::FlatRead32((r29 + 212));
    r0 = (r0 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F6B4;
    }
}

loc_8079F6A8:
{
    r4 = 65536;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8079F6B8;
}

loc_8079F6B4:
{
    r3 = 0;
}

loc_8079F6B8:
{
}

loc_8079F6BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8079F6E4;
    }
}

loc_8079F6C0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8079F6D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F6E4;
    }
}

loc_8079F6D8:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8079F6E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6C14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079F6E4:
{
    r4 = 0x809C0000u;
    r3 = (r29 + 212);
    r0 = MemoryInline::FlatRead32((r4 + 15328));
}

loc_8079F6F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8079F740;
    }
}

loc_8079F6F8:
{
    r0 = MemoryInline::FlatRead32((r29 + 212));
    r0 = (r0 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F710;
    }
}

loc_8079F704:
{
    r4 = 1073741824;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8079F714;
}

loc_8079F710:
{
    r3 = 0;
}

loc_8079F714:
{
}

loc_8079F718:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8079F740;
    }
}

loc_8079F71C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8079F730:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F740;
    }
}

loc_8079F734:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8079F740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6C14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079F740:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079F74C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F770;
    }
}

loc_8079F750:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_8079F758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_8079F770;
    }
}

loc_8079F75C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_8079F760:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F770;
    }
}

loc_8079F764:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8079F770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A6C14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8079F770:
{
    r0 = MemoryInline::FlatRead16((r29 + 348));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8079F778:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_8079F78C;
    }
}

loc_8079F77C:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite32((r29 + 120), r0);
    goto loc_8079F808;
}

loc_8079F78C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 204));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    r0 = MemoryInline::FlatRead32((r29 + 120));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079F79C:
{
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r29 + 120), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079F808;
    }
}

loc_8079F7A8:
{
    r0 = MemoryInline::FlatRead32((r29 + 116));
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F7B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F808;
    }
}

loc_8079F7B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    r3 = (r29 + 200);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r4 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 204));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r5 = MemoryInline::FlatRead32((r29 + 200));
    MemoryInline::FlatWriteFloat32((r29 + 204), f0.d);
    r0 = MemoryInline::FlatRead32((r29 + 204));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r0 = MemoryInline::FlatRead32((r29 + 208));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8079F808u;
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
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8079F808:
{
    r4 = MemoryInline::FlatRead32((r29 + 120));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 68));
    r0 = (r4 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F818:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    r3 = (r3 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 76));
    MemoryInline::FlatWriteFloat32((r29 + 188), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 192), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 196), f0.d);
    MemoryInline::FlatWrite32((r29 + 352), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079F894;
    }
}

loc_8079F838:
{
    r0 = (r4 & 524288);
}

loc_8079F83C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F858;
    }
}

loc_8079F840:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_8079F844:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079F894;
    }
}

loc_8079F848:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & -131073);
    MemoryInline::FlatWrite32((r29 + 120), r0);
    goto loc_8079F894;
}

loc_8079F858:
{
    r0 = (r4 & 262144);
}

loc_8079F85C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079F880;
    }
}

loc_8079F860:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(15));
}

loc_8079F864:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079F894;
    }
}

loc_8079F868:
{
    r0 = (r4 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079F86C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079F894;
    }
}

loc_8079F870:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & -131073);
    MemoryInline::FlatWrite32((r29 + 120), r0);
    goto loc_8079F894;
}

loc_8079F880:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(30));
}

loc_8079F884:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079F894;
    }
}

loc_8079F888:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & -131073);
    MemoryInline::FlatWrite32((r29 + 120), r0);
}

loc_8079F894:
{
    r3 = 0;
}

loc_8079F898:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8079EFEC func_8079EFEC preserves=true fpr_mask=0x00000000
