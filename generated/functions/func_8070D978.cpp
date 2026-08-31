#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_8070D978(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070D978;

loc_8070D978:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 7416);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 177));
}

loc_8070D9B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070D9D0;
    }
}

loc_8070D9BC:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(234));
}

loc_8070D9C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D9D0;
    }
}

loc_8070D9C8:
{
    r3 = 0;
    goto loc_8070DC64;
}

loc_8070D9D0:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(378));
}

loc_8070D9D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D9E8;
    }
}

loc_8070D9DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(606));
}

loc_8070D9E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070D9F0;
    }
}

loc_8070D9E4:
{
    goto loc_8070D9F8;
}

loc_8070D9E8:
{
    r3 = 0;
    goto loc_8070DC64;
}

loc_8070D9F0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 176), static_cast<uint8_t>(r0));
}

loc_8070D9F8:
{
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_CED = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_CED[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_CED[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8070DA04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070DA10;
    }
}

loc_8070DA08:
{
    r30 = 0;
    goto loc_8070DBCC;
}

loc_8070DA10:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 128), 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 128));
    r30 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DA1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DA40;
    }
}

loc_8070DA20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DA2C;
    }
}

loc_8070DA24:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DA30;
}

loc_8070DA2C:
{
    r0 = -1;
}

loc_8070DA30:
{
}

loc_8070DA34:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_8070DA40;
    }
}

loc_8070DA38:
{
    r30 = (r28 + 128);
    goto loc_8070DAC0;
}

loc_8070DA40:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DA48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DA6C;
    }
}

loc_8070DA4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DA58;
    }
}

loc_8070DA50:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DA5C;
}

loc_8070DA58:
{
    r0 = -1;
}

loc_8070DA5C:
{
}

loc_8070DA60:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_8070DA6C;
    }
}

loc_8070DA64:
{
    r30 = (r28 + 132);
    goto loc_8070DAC0;
}

loc_8070DA6C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r28 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DA74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DA98;
    }
}

loc_8070DA78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DA84;
    }
}

loc_8070DA7C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DA88;
}

loc_8070DA84:
{
    r0 = -1;
}

loc_8070DA88:
{
}

loc_8070DA8C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_8070DA98;
    }
}

loc_8070DA90:
{
    r30 = (r28 + 136);
    goto loc_8070DAC0;
}

loc_8070DA98:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r28 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DAA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DAC0;
    }
}

loc_8070DAA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DAB0;
    }
}

loc_8070DAA8:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DAB4;
}

loc_8070DAB0:
{
    r0 = -1;
}

loc_8070DAB4:
{
}

loc_8070DAB8:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_8070DAC0;
    }
}

loc_8070DABC:
{
    r30 = (r28 + 140);
}

loc_8070DAC0:
{
}

loc_8070DAC4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8070DBA8;
    }
}

loc_8070DAC8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DAD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070DADC;
    }
}

loc_8070DAD4:
{
    r30 = (r28 + 128);
    goto loc_8070DBA8;
}

loc_8070DADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DAE8;
    }
}

loc_8070DAE0:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DAEC;
}

loc_8070DAE8:
{
    r0 = -1;
}

loc_8070DAEC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DAF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070DB04;
    }
}

loc_8070DAFC:
{
    r30 = (r28 + 132);
    goto loc_8070DBA8;
}

loc_8070DB04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DB10;
    }
}

loc_8070DB08:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DB14;
}

loc_8070DB10:
{
    r0 = -1;
}

loc_8070DB14:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r28 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DB20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070DB2C;
    }
}

loc_8070DB24:
{
    r30 = (r28 + 136);
    goto loc_8070DBA8;
}

loc_8070DB2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DB38;
    }
}

loc_8070DB30:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DB3C;
}

loc_8070DB38:
{
    r0 = -1;
}

loc_8070DB3C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r28 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DB48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070DB54;
    }
}

loc_8070DB4C:
{
    r30 = (r28 + 140);
    goto loc_8070DBA8;
}

loc_8070DB54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DB60;
    }
}

loc_8070DB58:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070DB64;
}

loc_8070DB60:
{
    r0 = -1;
}

loc_8070DB64:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r29;
    r3 = (r28 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x8070DB7Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80702848u>(ctx);
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
    cr = ctx->cr;
}

loc_8070DB80:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8070DB8C;
    }
}

loc_8070DB84:
{
    r30 = 0;
    goto loc_8070DBA8;
}

loc_8070DB8C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r30 = (r28 + r0);
    r30 = (r30 + 128);
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DB9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DBA8;
    }
}

loc_8070DBA0:
{
    r4 = 0;
    ctx->lr = 0x8070DBA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070DBA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8070DBAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DBC8;
    }
}

loc_8070DBB0:
{
    r3 = r28;
    r4 = r30;
    r5 = r29;
    r6 = 0;
    ctx->lr = 0x8070DBC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A3F90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8070DBCC;
}

loc_8070DBC8:
{
    r30 = 0;
}

loc_8070DBCC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(526));
}

loc_8070DBD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070DBF0;
    }
}

loc_8070DBD4:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = 527;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    ctr = r12;
    ctx->lr = 0x8070DBF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8070DBF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8070DBF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DC60;
    }
}

loc_8070DBF8:
{
    r0 = MemoryInline::FlatRead16((r28 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(234));
}

loc_8070DC00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DC10;
    }
}

loc_8070DC04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(408));
}

loc_8070DC08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DC1C;
    }
}

loc_8070DC0C:
{
    goto loc_8070DC60;
}

loc_8070DC10:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 176), static_cast<uint8_t>(r0));
    goto loc_8070DC60;
}

loc_8070DC1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f2.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070DC34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070DC40;
    }
}

loc_8070DC38:
{
    f1.d = f0.d;
    goto loc_8070DC50;
}

loc_8070DC40:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070DC48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8070DC50;
    }
}

loc_8070DC4C:
{
    f1.d = f0.d;
}

loc_8070DC50:
{
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070DC58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070DC60;
    }
}

loc_8070DC5C:
{
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_8070DC60:
{
    r3 = r30;
}

loc_8070DC64:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8070D978 func_8070D978 preserves=false fpr_mask=0x80000000
