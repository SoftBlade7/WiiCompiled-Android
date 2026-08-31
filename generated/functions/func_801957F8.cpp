#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801957F8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801957F8;

loc_801957F8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r4 + 54));
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80195824:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80195C48;
    }
}

loc_8019582C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195848;
    }
}

loc_80195830:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80195834:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80195C48;
    }
}

loc_80195838:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195858;
    }
}

loc_8019583C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80195840:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195858;
    }
}

loc_80195844:
{
    goto loc_80195C48;
}

loc_80195848:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_8019584C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195C48;
    }
}

loc_80195850:
{
}

loc_80195858:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = (0 - r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1244));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -29188));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80195888:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019589C;
    }
}

loc_8019588C:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195894:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801958A8;
    }
}

loc_80195898:
{
    goto loc_801958AC;
}

loc_8019589C:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_801958A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801958A8;
    }
}

loc_801958A4:
{
    goto loc_801958AC;
}

loc_801958A8:
{
    f4.d = f1.d;
}

loc_801958AC:
{
    MemoryInline::FlatWriteFloat32((r3 + 1188), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1252));
    r0 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    r0 = (r0 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -29188));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801958E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801958F4;
    }
}

loc_801958E4:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_801958EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195900;
    }
}

loc_801958F0:
{
    goto loc_80195904;
}

loc_801958F4:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_801958F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80195900;
    }
}

loc_801958FC:
{
    goto loc_80195904;
}

loc_80195900:
{
    f4.d = f1.d;
}

loc_80195904:
{
    MemoryInline::FlatWriteFloat32((r3 + 1192), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1248));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -29188));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80195934:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195948;
    }
}

loc_80195938:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195940:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195954;
    }
}

loc_80195944:
{
    goto loc_80195958;
}

loc_80195948:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8019594C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80195954;
    }
}

loc_80195950:
{
    goto loc_80195958;
}

loc_80195954:
{
    f4.d = f1.d;
}

loc_80195958:
{
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r30 + 12);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 1196), f4.d);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1188));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019548Cu>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1192));
    r3 = r30;
    r4 = (r30 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019548Cu>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1196));
    r3 = r30;
    r4 = (r30 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019548Cu>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f6.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f5.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    ctx->lr = 0x80195A28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    InvokeDirectCpu<0x80195540u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x80195A30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801956D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80195C48;
    }
}

loc_80195A3C:
{
    r0 = MemoryInline::FlatRead8((r31 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80195A44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80195C48;
    }
}

loc_80195A48:
{
    r0 = MemoryInline::FlatRead8((r31 + 54));
}

loc_80195A50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_80195A60;
    }
}

loc_80195A54:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_80195A58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80195A60;
    }
}

loc_80195A5C:
{
    goto loc_80195C48;
}

loc_80195A60:
{
    r0 = MemoryInline::FlatRead16((r31 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = (0 - r0);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1256));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -29184));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80195A90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195AA4;
    }
}

loc_80195A94:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195A9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195AB0;
    }
}

loc_80195AA0:
{
    goto loc_80195AB4;
}

loc_80195AA4:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195AA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80195AB0;
    }
}

loc_80195AAC:
{
    goto loc_80195AB4;
}

loc_80195AB0:
{
    f4.d = f1.d;
}

loc_80195AB4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = MemoryInline::FlatRead16((r31 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1264));
    r0 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    r0 = (r0 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -29184));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80195AE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195AFC;
    }
}

loc_80195AEC:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195AF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195B08;
    }
}

loc_80195AF8:
{
    goto loc_80195B0C;
}

loc_80195AFC:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195B00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80195B08;
    }
}

loc_80195B04:
{
    goto loc_80195B0C;
}

loc_80195B08:
{
    f4.d = f1.d;
}

loc_80195B0C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1260));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f4.d = MemoryInline::FlatReadFloat32((r13 + -29184));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80195B3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195B50;
    }
}

loc_80195B40:
{
    f4.d = (-(f4.d));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195B48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195B5C;
    }
}

loc_80195B4C:
{
    goto loc_80195B60;
}

loc_80195B50:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_80195B54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80195B5C;
    }
}

loc_80195B58:
{
    goto loc_80195B60;
}

loc_80195B5C:
{
    f4.d = f1.d;
}

loc_80195B60:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    r0 = MemoryInline::FlatRead8((r30 + 1318));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80195B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80195B84;
    }
}

loc_80195B70:
{
    r4 = (r1 + 32);
    r3 = 0x80340000u;
    r5 = r4;
    r3 = (r3 + 27840);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_80195B84:
{
    r6 = MemoryInline::FlatRead32((r30 + 104));
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r30 + 108));
    r4 = (r30 + 104);
    r0 = MemoryInline::FlatRead32((r30 + 112));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019548Cu>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = r30;
    r4 = (r30 + 108);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019548Cu>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r3 = r30;
    r4 = (r30 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019548Cu>(ctx);
    r0 = ctx->gpr[0];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 108));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 112));
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 116), f6.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
}

loc_80195C48:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0003FFF gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xE0001FFF fpr_write=0xE0001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801957F8 func_801957F8 preserves=true fpr_mask=0x00000000
