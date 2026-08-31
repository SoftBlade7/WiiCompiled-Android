#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80061570(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80061570;

loc_80061570:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006157C:
{
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 132), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 128), r28);
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80061990;
    }
}

loc_800615A0:
{
    r31 = 0x802C0000u;
    r4 = (r31 + -17740);
    r0 = MemoryInline::FlatRead16((r31 + -17740));
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800615B4:
{
    r0 = (r3 * 48);
    r3 = (r4 + r0);
    r3 = (r3 + 52);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800615FC;
    }
}

loc_800615E8:
{
    r4 = (r4 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r31 + -17740));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam16((r31 + -17740), static_cast<uint16_t>(r0));
}

loc_800615FC:
{
    r0 = (r30 & 255);
    r3 = 0x802C0000u;
}

loc_80061608:
{
    r3 = (r3 + -17740);
    r31 = (r3 + 4);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(127))) {
        goto loc_80061824;
    }
}

loc_80061614:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_8006161C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(127))) {
        goto loc_80061638;
    }
}

loc_80061620:
{
    r0 = (r4 * 68);
    r3 = 0x802C0000u;
    r3 = (r3 + -28536);
    r3 = (r3 + r0);
    r3 = (r3 + 44);
    goto loc_8006163C;
}

loc_80061638:
{
    r3 = 0;
}

loc_8006163C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 4);
}

loc_80061644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80061824;
    }
}

loc_80061648:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(127));
}

loc_8006164C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8006166C;
    }
}

loc_80061650:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r3 = 0x802C0000u;
    r0 = (r0 * 68);
    r3 = (r3 + -28536);
    r3 = (r3 + r0);
    r29 = (r3 + 44);
    goto loc_80061670;
}

loc_8006166C:
{
    r29 = 0;
}

loc_80061670:
{
    r3 = r29;
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077910u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r29);
    r3 = 0;
    r0 = (r4 & 1);
}

loc_80061688:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80061698;
    }
}

loc_8006168C:
{
    r0 = (r4 & 2);
}

loc_80061690:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80061698;
    }
}

loc_80061694:
{
    r3 = 1;
}

loc_80061698:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006169C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800616C8;
    }
}

loc_800616A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800616AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061748;
    }
}

loc_800616B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800616B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061748;
    }
}

loc_800616BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800616C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061748;
    }
}

loc_800616C8:
{
    r3 = r29;
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800778F0u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = (r1 + 68);
    r4 = r31;
    r5 = r3;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f3.d = (-(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f4.d = (-(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8006171C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061758;
    }
}

loc_8006172C:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80061730:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061758;
    }
}

loc_80061734:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80061738:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061758;
    }
}

loc_8006173C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29520));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80061758;
}

loc_80061748:
{
    r3 = (r1 + 68);
    r4 = r31;
    r5 = r3;
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    InvokeDirectCpu<0x80085AB0u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
}

loc_80061758:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80061760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061778;
    }
}

loc_80061764:
{
    r3 = (r1 + 80);
    r4 = (r1 + 68);
    r5 = (r1 + 104);
    ctx->lr = 0x80061774u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019AD08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    goto loc_800617B4;
}

loc_80061778:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f3.d = (-(f1.d));
    f4.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
}

loc_800617B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29516));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800617C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006180C;
    }
}

loc_800617C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800617D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006180C;
    }
}

loc_800617D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800617E8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80061800;
    }
}

loc_800617F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29520));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_800618CC;
}

loc_80061800:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29512));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_800618CC;
}

loc_8006180C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29512));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    goto loc_800618CC;
}

loc_80061824:
{
    r0 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8006182C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800618A8;
    }
}

loc_80061830:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_80061838:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80061854;
    }
}

loc_8006183C:
{
    r0 = (r0 * 48);
    r3 = 0x802C0000u;
    r3 = (r3 + -17740);
    r3 = (r3 + r0);
    r6 = (r3 + 52);
    goto loc_80061858;
}

loc_80061854:
{
    r6 = 0;
}

loc_80061858:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16));
    r3 = (r1 + 80);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    r4 = (r1 + 56);
    r5 = (r1 + 104);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 32));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    ctx->lr = 0x800618A4u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019AD08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    goto loc_800618CC;
}

loc_800618A8:
{
    r3 = 0x802C0000u;
    r4 = r28;
    r3 = (r3 + -17740);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5, f5.d);
    // end of inlined leaf 0x80199D30
    goto loc_80061990;
}

loc_800618CC:
{
    r3 = (r1 + 104);
    r4 = r3;
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_6));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_6, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 92);
    r4 = (r1 + 104);
    r5 = (r1 + 44);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + -60), 0, 84u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_1, f10.d);
    // end of inlined leaf 0x8019ACCC
    r3 = (r1 + 44);
    r4 = r3;
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_7));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_7, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 104);
    r4 = (r1 + 44);
    r5 = (r1 + 32);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_2, f10.d);
    // end of inlined leaf 0x8019ACCC
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 44));
    r3 = r28;
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r28, f0.d);
    r4 = r31;
    r5 = r28;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r28 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r28 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r28 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r28 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r28 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r1 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r28 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r1 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r28 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r1 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r28 + 40), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    r3 = 0x802C0000u;
    MemoryInline::FlatWriteFloat32((r28 + 44), f0.d);
    r3 = (r3 + -17740);
    r4 = r28;
    r5 = r28;
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 5172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
}

loc_80061990:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r29 = MemoryInline::FlatRead32((r1 + 132));
    r28 = MemoryInline::FlatRead32((r1 + 128));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007F gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x8000FFFF fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80061570 func_80061570 preserves=true fpr_mask=0x00000000
