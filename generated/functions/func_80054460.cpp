#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80054460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80054CF0_loc_0 = 0;
    uint32_t addr_lfsx_80054D08_loc_0 = 0;
    uint32_t addr_lfsx_80054D28_loc_0 = 0;
    uint32_t addr_lfsx_80054D84_loc_0 = 0;
    uint32_t addr_lfsx_80054D9C_loc_0 = 0;
    uint32_t addr_lfsx_80054DBC_loc_0 = 0;
    uint32_t addr_lfsx_80054E18_loc_0 = 0;
    uint32_t addr_lfsx_80054E30_loc_0 = 0;
    uint32_t addr_lfsx_80054E50_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80054460;

loc_80054460:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
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
    r31 = MemoryInline::FlatRead32((r6 + 4));
    r0 = 1127219200;
    f29.d = f1.d;
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r0);
    r8 = (r31 & 939524096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_800544A0:
{
    r27 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r28 = r4;
    r29 = r6;
    r30 = r7;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054504;
    }
}

loc_800544B8:
{
    r0 = (r8 + -134217728);
}

loc_800544C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80054518;
    }
}

loc_800544C4:
{
    r0 = (r8 + -268435456);
}

loc_800544CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005459C;
    }
}

loc_800544D0:
{
    r0 = (r8 + -402653184);
}

loc_800544D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80054620;
    }
}

loc_800544DC:
{
    r0 = (r8 + -536870912);
}

loc_800544E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800546A4;
    }
}

loc_800544E8:
{
    r0 = (r8 + -671088640);
}

loc_800544F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80054994;
    }
}

loc_800544F4:
{
    r0 = (r8 + -805306368);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_800544FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054C9C;
    }
}

loc_80054500:
{
    goto loc_80054E60;
}

loc_80054504:
{
    f31.d = MemoryInline::FlatReadFloat32(r7);
    r30 = (r7 + 12);
    f30.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f29.d = MemoryInline::FlatReadFloat32((r7 + 8));
    goto loc_80054E6C;
}

loc_80054518:
{
    r0 = (r31 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005451C:
{
    r3 = r30;
    r30 = (r7 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054530;
    }
}

loc_80054528:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_8005453C;
}

loc_80054530:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r6);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80054270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8005453C:
{
    r0 = (r31 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054540:
{
    f31.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054558;
    }
}

loc_80054550:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054568;
}

loc_80054558:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80054270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80054568:
{
    r0 = (r31 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005456C:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054584;
    }
}

loc_8005457C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054594;
}

loc_80054584:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80054270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80054594:
{
    f29.d = f1.d;
    goto loc_80054E6C;
}

loc_8005459C:
{
    r0 = (r31 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800545A0:
{
    r3 = r30;
    r30 = (r7 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800545B4;
    }
}

loc_800545AC:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800545C0;
}

loc_800545B4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r6);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800540F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_800545C0:
{
    r0 = (r31 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800545C4:
{
    f31.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800545DC;
    }
}

loc_800545D4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800545EC;
}

loc_800545DC:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800540F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_800545EC:
{
    r0 = (r31 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800545F0:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054608;
    }
}

loc_80054600:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054618;
}

loc_80054608:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800540F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_80054618:
{
    f29.d = f1.d;
    goto loc_80054E6C;
}

loc_80054620:
{
    r0 = (r31 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054624:
{
    r3 = r30;
    r30 = (r7 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054638;
    }
}

loc_80054630:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054644;
}

loc_80054638:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r6);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_80054644:
{
    r0 = (r31 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054648:
{
    f31.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054660;
    }
}

loc_80054658:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054670;
}

loc_80054660:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_80054670:
{
    r0 = (r31 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054674:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005468C;
    }
}

loc_80054684:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_8005469C;
}

loc_8005468C:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_8005469C:
{
    f29.d = f1.d;
    goto loc_80054E6C;
}

loc_800546A4:
{
    r0 = (r31 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800546A8:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead16(r5);
    r30 = (r7 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800546C0;
    }
}

loc_800546B8:
{
    f31.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800547A0;
}

loc_800546C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 40);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f29.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 40));
    SetCRFloatResident(cr, 0, f29.d, f6.d);
}

loc_800546DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054708;
    }
}

loc_800546E4:
{
    r3 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f31.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_800547A0;
}

loc_80054708:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_8005470C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054738;
    }
}

loc_80054710:
{
    r3 = (r4 + r0);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    r3 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f31.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_800547A0;
}

loc_80054738:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r5);
    r3 = (r4 + r5);
    r3 = MemoryInline::FlatRead8((r3 + 8));
    f5.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f6.d, f4.d);
}

loc_8005476C:
{
    f31.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054778;
    }
}

loc_80054774:
{
    goto loc_800547A0;
}

loc_80054778:
{
    r3 = (r5 + 1);
    r3 = (r3 & 65535);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f31.d = PPC_Fmadds(f4.d, f0.d, f31.d);
}

loc_800547A0:
{
    r3 = (r31 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800547A4:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800547B8;
    }
}

loc_800547B0:
{
    f30.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054898;
}

loc_800547B8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 36);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 36));
    SetCRFloatResident(cr, 0, f1.d, f6.d);
}

loc_800547D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054800;
    }
}

loc_800547DC:
{
    r3 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f30.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_80054898;
}

loc_80054800:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80054804:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054830;
    }
}

loc_80054808:
{
    r3 = (r4 + r0);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    r3 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f30.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_80054898;
}

loc_80054830:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r5);
    r3 = (r4 + r5);
    r3 = MemoryInline::FlatRead8((r3 + 8));
    f5.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f6.d, f4.d);
}

loc_80054864:
{
    f30.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054870;
    }
}

loc_8005486C:
{
    goto loc_80054898;
}

loc_80054870:
{
    r3 = (r5 + 1);
    r3 = (r3 & 65535);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f30.d = PPC_Fmadds(f4.d, f0.d, f30.d);
}

loc_80054898:
{
    r3 = (r31 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005489C:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800548B0;
    }
}

loc_800548A8:
{
    f29.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054E6C;
}

loc_800548B0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 32);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 32));
    SetCRFloatResident(cr, 0, f1.d, f6.d);
}

loc_800548CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800548F8;
    }
}

loc_800548D4:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f29.d = PPC_Fmadds(f1.d, f2.d, f0.d);
    goto loc_80054E6C;
}

loc_800548F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_800548FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054928;
    }
}

loc_80054900:
{
    r3 = (r4 + r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f29.d = PPC_Fmadds(f1.d, f2.d, f0.d);
    goto loc_80054E6C;
}

loc_80054928:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r5);
    r3 = (r4 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    f5.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    SetCRFloatResident(cr, 0, f6.d, f1.d);
}

loc_8005495C:
{
    f29.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054968;
    }
}

loc_80054964:
{
    goto loc_80054E6C;
}

loc_80054968:
{
    r0 = (r5 + 1);
    r0 = (r0 & 65535);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f29.d = PPC_Fmadds(f1.d, f0.d, f29.d);
    goto loc_80054E6C;
}

loc_80054994:
{
    r0 = (r31 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054998:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead16(r5);
    r30 = (r7 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800549B0;
    }
}

loc_800549A8:
{
    f31.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054A98;
}

loc_800549B0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 28);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f29.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 28));
    SetCRFloatResident(cr, 0, f29.d, f5.d);
}

loc_800549CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800549F8;
    }
}

loc_800549D4:
{
    r3 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f31.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_80054A98;
}

loc_800549F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_800549FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054A2C;
    }
}

loc_80054A00:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 131070);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    r3 = (r4 + r3);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r3 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f31.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_80054A98;
}

loc_80054A2C:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r5);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 131070);
    r3 = (r4 + r3);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_80054A64:
{
    f31.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054A70;
    }
}

loc_80054A6C:
{
    goto loc_80054A98;
}

loc_80054A70:
{
    r3 = (r5 + 1);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 131070);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f31.d = PPC_Fmadds(f6.d, f0.d, f31.d);
}

loc_80054A98:
{
    r3 = (r31 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80054A9C:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054AB0;
    }
}

loc_80054AA8:
{
    f30.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054B98;
}

loc_80054AB0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 24);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 24));
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_80054ACC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054AF8;
    }
}

loc_80054AD4:
{
    r3 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f30.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_80054B98;
}

loc_80054AF8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80054AFC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054B2C;
    }
}

loc_80054B00:
{
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 131070);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    r3 = (r4 + r3);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r3 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f30.d = PPC_Fmadds(f2.d, f3.d, f0.d);
    goto loc_80054B98;
}

loc_80054B2C:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r5);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 131070);
    r3 = (r4 + r3);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_80054B64:
{
    f30.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054B70;
    }
}

loc_80054B6C:
{
    goto loc_80054B98;
}

loc_80054B70:
{
    r3 = (r5 + 1);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 131070);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PPC_Fmadds(f3.d, f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f30.d = PPC_Fmadds(f6.d, f0.d, f30.d);
}

loc_80054B98:
{
    r3 = (r31 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80054B9C:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054BB0;
    }
}

loc_80054BA8:
{
    f29.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054E6C;
}

loc_80054BB0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 20);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 20));
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_80054BCC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054BF8;
    }
}

loc_80054BD4:
{
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f29.d = PPC_Fmadds(f1.d, f2.d, f0.d);
    goto loc_80054E6C;
}

loc_80054BF8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80054BFC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054C2C;
    }
}

loc_80054C00:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 131070);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    r3 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f29.d = PPC_Fmadds(f1.d, f2.d, f0.d);
    goto loc_80054E6C;
}

loc_80054C2C:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 131070);
    r3 = (r4 + r0);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    SetCRFloatResident(cr, 0, f5.d, f3.d);
}

loc_80054C64:
{
    f29.d = PPC_Fmadds(f2.d, f0.d, f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054C70;
    }
}

loc_80054C6C:
{
    goto loc_80054E6C;
}

loc_80054C70:
{
    r0 = (r5 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 131070);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PPC_Fmadds(f2.d, f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f29.d = PPC_Fmadds(f3.d, f0.d, f29.d);
    goto loc_80054E6C;
}

loc_80054C9C:
{
    r0 = (r31 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054CA0:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead16(r5);
    r30 = (r7 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054CB8;
    }
}

loc_80054CB0:
{
    f31.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054D34;
}

loc_80054CB8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 16);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f29.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 16));
    SetCRFloatResident(cr, 0, f29.d, f3.d);
}

loc_80054CD4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054CE4;
    }
}

loc_80054CDC:
{
    f31.d = MemoryInline::FlatReadFloat32(r4);
    goto loc_80054D34;
}

loc_80054CE4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80054CE8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054CF8;
    }
}

loc_80054CEC:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 262140);
    addr_lfsx_80054CF0_loc_0 = (r4 + r3);
    f31.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054CF0_loc_0);
    goto loc_80054D34;
}

loc_80054CF8:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 262140);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    addr_lfsx_80054D08_loc_0 = (r4 + r3);
    f31.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054D08_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f0.d));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80054D18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054D20;
    }
}

loc_80054D1C:
{
    goto loc_80054D34;
}

loc_80054D20:
{
    r3 = (r5 + 1);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & 262140);
    addr_lfsx_80054D28_loc_0 = (r4 + r3);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054D28_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f31.d = PPC_Fmadds(f2.d, f0.d, f31.d);
}

loc_80054D34:
{
    r3 = (r31 & 131072);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80054D38:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054D4C;
    }
}

loc_80054D44:
{
    f30.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054DC8;
}

loc_80054D4C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r1 + 12);
    r4 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r5, PPC_PsFromScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r5 = MemoryInline::FlatRead16((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80054D68:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054D78;
    }
}

loc_80054D70:
{
    f30.d = MemoryInline::FlatReadFloat32(r4);
    goto loc_80054DC8;
}

loc_80054D78:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80054D7C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054D8C;
    }
}

loc_80054D80:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_5 & 262140);
    addr_lfsx_80054D84_loc_0 = (r4 + r3);
    f30.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054D84_loc_0);
    goto loc_80054DC8;
}

loc_80054D8C:
{
    MemoryInline::FlatWriteRam32((r1 + 60), r5);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_6 & 262140);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    addr_lfsx_80054D9C_loc_0 = (r4 + r3);
    f30.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054D9C_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80054DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054DB4;
    }
}

loc_80054DB0:
{
    goto loc_80054DC8;
}

loc_80054DB4:
{
    r3 = (r5 + 1);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & 262140);
    addr_lfsx_80054DBC_loc_0 = (r4 + r3);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054DBC_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f30.d = PPC_Fmadds(f2.d, f0.d, f30.d);
}

loc_80054DC8:
{
    r3 = (r31 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80054DCC:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054DE0;
    }
}

loc_80054DD8:
{
    f29.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054E6C;
}

loc_80054DE0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 8);
    r3 = (r3 + r6);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r4, PPC_PsFromScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    r4 = MemoryInline::FlatRead16((r1 + 8));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80054DFC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054E0C;
    }
}

loc_80054E04:
{
    f29.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054E6C;
}

loc_80054E0C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80054E10:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80054E20;
    }
}

loc_80054E14:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 262140);
    addr_lfsx_80054E18_loc_0 = (r3 + r0);
    f29.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054E18_loc_0);
    goto loc_80054E6C;
}

loc_80054E20:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29768));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    addr_lfsx_80054E30_loc_0 = (r3 + r0);
    f29.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054E30_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80054E40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054E48;
    }
}

loc_80054E44:
{
    goto loc_80054E6C;
}

loc_80054E48:
{
    r0 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 262140);
    addr_lfsx_80054E50_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80054E50_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f29.d = PPC_Fmadds(f1.d, f0.d, f29.d);
    goto loc_80054E6C;
}

loc_80054E60:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    f30.d = f31.d;
    f29.d = f31.d;
}

loc_80054E6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29776));
    r3 = r27;
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f2.d = PpcFmulsInline(f0.d, f30.d);
    f3.d = PpcFmulsInline(f0.d, f29.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32(r28, f31.d);
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r28 + 4), f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f29.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 76), 0, 76u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 52u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80001FF gpr_write=0xF80009FB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80054460 func_80054460 preserves=false fpr_mask=0xE0000000
