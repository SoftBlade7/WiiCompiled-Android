#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_807029CC_statefree(uint32_t);

extern "C" void func_80864000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80864000;

loc_80864000:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -1200);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1788));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086469C;
    }
}

loc_8086403C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1791));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864044:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086469C;
    }
}

loc_80864048:
{
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x807029CCu) && KnownTranslatedCpuCall<0x807029CCu>::kAvailable && !KnownTranslatedCpuCall<0x807029CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807029CCu>()) {
        const auto state_free_result_807029CC_CF4 = func_807029CC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_807029CC_CF4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x807029CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r12 = MemoryInline::FlatRead32(r28);
    r4 = r3;
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x80864068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 1756));
}

loc_80864070:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8086407C;
    }
}

loc_80864074:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 1756), r0);
}

loc_8086407C:
{
    r0 = MemoryInline::FlatRead32((r28 + 316));
}

loc_80864084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808640A4;
    }
}

loc_80864088:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    r0 = MemoryInline::FlatRead32((r3 + 16200));
}

loc_80864098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808640A4;
    }
}

loc_8086409C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 316), r0);
}

loc_808640A4:
{
    r3 = MemoryInline::FlatRead32((r28 + 1728));
    r30 = 5;
    f31.d = MemoryInline::FlatReadFloat32((r28 + 1764));
    r29 = 0;
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 & 128);
}

loc_808640C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864168;
    }
}

loc_808640C8:
{
    r0 = MemoryInline::FlatRead32((r28 + 1740));
    r3 = MemoryInline::FlatRead32((r28 + 1780));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_808640D4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 1780), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086410C;
    }
}

loc_808640E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1036));
    r4 = 1;
    r3 = 0;
    r0 = 4;
    f31.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWrite32((r28 + 1740), r4);
    r30 = 4;
    r29 = 1;
    MemoryInline::FlatWrite32((r28 + 1776), r3);
    MemoryInline::FlatWrite32((r28 + 1780), r0);
    goto loc_808642E4;
}

loc_8086410C:
{
}

loc_80864110:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_808642E4;
    }
}

loc_80864114:
{
    r0 = MemoryInline::FlatRead32((r28 + 1776));
}

loc_8086411C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8086413C;
    }
}

loc_80864120:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1036));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1040));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    MemoryInline::FlatWrite32((r28 + 1776), r0);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    goto loc_80864154;
}

loc_8086413C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1036));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1040));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    MemoryInline::FlatWrite32((r28 + 1776), r0);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_80864154:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r28 + 1780), r0);
    r30 = 0;
    r29 = 1;
    goto loc_808642E4;
}

loc_80864168:
{
    r0 = (r3 & 65536);
}

loc_8086416C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864210;
    }
}

loc_80864170:
{
    r0 = MemoryInline::FlatRead32((r28 + 1740));
    r3 = MemoryInline::FlatRead32((r28 + 1780));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8086417C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 1780), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808641B4;
    }
}

loc_80864188:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1044));
    r4 = 4;
    r3 = 0;
    r0 = 5;
    f31.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWrite32((r28 + 1740), r4);
    r30 = 5;
    r29 = 1;
    MemoryInline::FlatWrite32((r28 + 1776), r3);
    MemoryInline::FlatWrite32((r28 + 1780), r0);
    goto loc_808642E4;
}

loc_808641B4:
{
}

loc_808641B8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_808642E4;
    }
}

loc_808641BC:
{
    r0 = MemoryInline::FlatRead32((r28 + 1776));
}

loc_808641C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808641E4;
    }
}

loc_808641C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1044));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1048));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    MemoryInline::FlatWrite32((r28 + 1776), r0);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    goto loc_808641FC;
}

loc_808641E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1044));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1048));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    MemoryInline::FlatWrite32((r28 + 1776), r0);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_808641FC:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r28 + 1780), r0);
    r30 = 0;
    r29 = 1;
    goto loc_808642E4;
}

loc_80864210:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -2147483648);
}

loc_80864218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864238;
    }
}

loc_8086421C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1740));
}

loc_80864224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_808642E4;
    }
}

loc_80864228:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r28 + 1740), r0);
    r29 = 1;
    goto loc_808642E4;
}

loc_80864238:
{
    r0 = (r3 & 32768);
}

loc_8086423C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864264;
    }
}

loc_80864240:
{
    r0 = MemoryInline::FlatRead32((r28 + 1740));
}

loc_80864248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_808642E4;
    }
}

loc_8086424C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1052));
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 1740), r0);
    r29 = 1;
    f31.d = PpcFmulsInline(f0.d, f31.d);
    goto loc_808642E4;
}

loc_80864264:
{
    r0 = MemoryInline::FlatRead32((r28 + 1740));
}

loc_8086426C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808642E4;
    }
}

loc_80864270:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 1740), r0);
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r28 + 1772));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r29 = 1;
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = 0x809C0000u;
    r0 = (r0 * 28);
    r3 = MemoryInline::FlatRead32((r3 + 9048));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 80));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_808642AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808642E4;
    }
}

loc_808642B0:
{
    r3 = MemoryInline::FlatRead32((r28 + 260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808642B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808642C4;
    }
}

loc_808642BC:
{
    r4 = 10;
    ctx->lr = 0x808642C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808642C4:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    r3 = -1;
    MemoryInline::FlatWrite32((r28 + 264), r3);
    MemoryInline::FlatWrite32((r28 + 268), r0);
    MemoryInline::FlatWriteFloat32((r28 + 272), f0.d);
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 276), r0);
}

loc_808642E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_808642E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864350;
    }
}

loc_808642EC:
{
    r3 = MemoryInline::FlatRead32((r28 + 312));
    f1.d = f31.d;
    r4 = r30;
    r12 = MemoryInline::FlatRead32((r3 + 8));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80864308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 1740));
}

loc_80864310:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8086431C;
    }
}

loc_80864314:
{
}

loc_80864318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80864350;
    }
}

loc_8086431C:
{
    r3 = MemoryInline::FlatRead32((r28 + 260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80864324:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864330;
    }
}

loc_80864328:
{
    r4 = 10;
    ctx->lr = 0x80864330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80864330:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    r3 = -1;
    MemoryInline::FlatWrite32((r28 + 264), r3);
    MemoryInline::FlatWrite32((r28 + 268), r0);
    MemoryInline::FlatWriteFloat32((r28 + 272), f0.d);
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 276), r0);
}

loc_80864350:
{
    r3 = MemoryInline::FlatRead32((r28 + 1752));
}

loc_80864358:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_808643AC;
    }
}

loc_8086435C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1784));
}

loc_80864364:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80864370;
    }
}

loc_80864368:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 1752), r0);
}

loc_80864370:
{
    r0 = MemoryInline::FlatRead32((r28 + 1752));
}

loc_80864378:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(30))) {
        goto loc_808643AC;
    }
}

loc_8086437C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1736));
}

loc_80864384:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(28))) {
        goto loc_808643AC;
    }
}

loc_80864388:
{
    r0 = MemoryInline::FlatRead32((r28 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808643AC;
    }
}

loc_80864394:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = 20;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x808643ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808643AC:
{
    r0 = MemoryInline::FlatRead32((r28 + 248));
    r3 = 0;
    MemoryInline::FlatWrite8((r28 + 1784), static_cast<uint8_t>(r3));
}

loc_808643BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808643D0;
    }
}

loc_808643C0:
{
    r3 = MemoryInline::FlatRead32((r28 + 1744));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 1744), r0);
    goto loc_808643D8;
}

loc_808643D0:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r28 + 1744), r0);
}

loc_808643D8:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14523));
}

loc_808643E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864424;
    }
}

loc_808643E8:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r4 = 4;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80864400:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80864444;
    }
}

loc_80864404:
{
    r3 = MemoryInline::FlatRead32((r28 + 1728));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 16384);
}

loc_80864418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864444;
    }
}

loc_8086441C:
{
    r29 = 1;
    goto loc_80864444;
}

loc_80864424:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r28 + 1772));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r29 = (r29_rot_1 & 1);
}

loc_80864444:
{
    r0 = MemoryInline::FlatRead8((r28 + 1786));
}

loc_8086444C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864518;
    }
}

loc_80864450:
{
}

loc_80864454:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80864518;
    }
}

loc_80864458:
{
    r0 = MemoryInline::FlatRead8((r28 + 1785));
}

loc_80864460:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80864518;
    }
}

loc_80864464:
{
    r4 = MemoryInline::FlatRead32((r28 + 1728));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
}

loc_80864478:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80864518;
    }
}

loc_8086447C:
{
    r3 = MemoryInline::FlatRead32((r28 + 1748));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 1748), r0);
}

loc_8086448C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(120))) {
        goto loc_80864518;
    }
}

loc_80864490:
{
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808644A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864518;
    }
}

loc_808644A4:
{
    r3 = MemoryInline::FlatRead8((r28 + 1772));
    r29 = -1;
    r30 = 1;
    ctx->lr = 0x808644B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8078CFA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808644B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808644D8;
    }
}

loc_808644BC:
{
}

loc_808644C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_808644E0;
    }
}

loc_808644C4:
{
}

loc_808644C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_808644E8;
    }
}

loc_808644CC:
{
}

loc_808644D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_808644F0;
    }
}

loc_808644D4:
{
    goto loc_80864500;
}

loc_808644D8:
{
    r29 = 29;
    goto loc_80864504;
}

loc_808644E0:
{
    r29 = 30;
    goto loc_80864504;
}

loc_808644E8:
{
    r29 = 31;
    goto loc_80864504;
}

loc_808644F0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 1785), static_cast<uint8_t>(r0));
    r30 = 0;
    goto loc_80864504;
}

loc_80864500:
{
    r30 = 0;
}

loc_80864504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80864508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864518;
    }
}

loc_8086450C:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x80864518u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80864CECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80864518:
{
    r4 = MemoryInline::FlatRead32((r28 + 252));
}

loc_80864520:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_8086454C;
    }
}

loc_80864524:
{
    r3 = MemoryInline::FlatRead32((r28 + 256));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086452C:
{
    MemoryInline::FlatWrite32((r28 + 256), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8086454C;
    }
}

loc_80864534:
{
    r3 = r28;
    ctx->lr = 0x8086453Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80864914u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = -1;
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 252), r3);
    MemoryInline::FlatWrite32((r28 + 256), r0);
}

loc_8086454C:
{
    r5 = MemoryInline::FlatRead32((r28 + 264));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80864558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086469C;
    }
}

loc_8086455C:
{
    r3 = MemoryInline::FlatRead32((r28 + 268));
}

loc_80864564:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80864668;
    }
}

loc_80864568:
{
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086456C:
{
    MemoryInline::FlatWrite32((r28 + 268), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086469C;
    }
}

loc_80864574:
{
    r4 = 0;
    r3 = 2;
    r0 = 10;
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80864598:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808645F8;
    }
}

loc_8086459C:
{
    r3 = 0x809C0000u;
    r4 = (r28 + 260);
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r6 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 1468));
    r3 = (r3 + 12);
    ctx->lr = 0x808645B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A3E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_3 & 134217727);
}

loc_808645C0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8086461C;
    }
}

loc_808645C4:
{
    r0 = MemoryInline::FlatRead8((r28 + 1773));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_808645CC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8086461C;
    }
}

loc_808645D0:
{
    r3 = 0x809C0000u;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead32((r3 + 8984));
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806F6BECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 260));
}

loc_808645EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8086461C;
    }
}

loc_808645F0:
{
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
    goto loc_8086461C;
}

loc_808645F8:
{
    r12 = MemoryInline::FlatRead32(r28);
    r4 = r5;
    r3 = r28;
    r5 = (r28 + 260);
    r12 = MemoryInline::FlatRead32((r12 + 244));
    r6 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x80864618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r3;
}

loc_8086461C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80864620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864644;
    }
}

loc_80864624:
{
    r4 = MemoryInline::FlatRead32((r28 + 264));
    r3 = r28;
    r5 = MemoryInline::FlatRead32((r28 + 1736));
    r6 = (r28 + 260);
    r8 = MemoryInline::FlatRead8((r28 + 280));
    r7 = 1;
    r9 = MemoryInline::FlatRead32((r28 + 276));
    ctx->lr = 0x80864644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808656CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80864644:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    r3 = -1;
    MemoryInline::FlatWrite32((r28 + 264), r3);
    MemoryInline::FlatWrite32((r28 + 268), r0);
    MemoryInline::FlatWriteFloat32((r28 + 272), f0.d);
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 276), r0);
    goto loc_8086469C;
}

loc_80864668:
{
    r3 = MemoryInline::FlatRead32((r28 + 260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80864670:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086467C;
    }
}

loc_80864674:
{
    r4 = 0;
    ctx->lr = 0x8086467Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8086467C:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    r3 = -1;
    MemoryInline::FlatWrite32((r28 + 264), r3);
    MemoryInline::FlatWrite32((r28 + 268), r0);
    MemoryInline::FlatWriteFloat32((r28 + 272), f0.d);
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 276), r0);
}

loc_8086469C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80864000 func_80864000 preserves=false fpr_mask=0x80000000
