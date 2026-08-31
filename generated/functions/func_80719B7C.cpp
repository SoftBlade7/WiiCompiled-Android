#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80719B7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r29 = ctx->gpr[29];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80719B7C;

loc_80719B7C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719BB0;
    }
}

loc_80719B84:
{
}

loc_80719B88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80719BE8;
    }
}

loc_80719B8C:
{
}

loc_80719B90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80719C58;
    }
}

loc_80719B94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80719B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719CC8;
    }
}

loc_80719B9C:
{
}

loc_80719BA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80719D00;
    }
}

loc_80719BA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80719BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719D7C;
    }
}

loc_80719BAC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719BB0:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 680;
    r5 = 120;
    ctx->lr = 0x80719BCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719BE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719BE8:
{
    r0 = MemoryInline::FlatRead8((r29 + 18));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80719C20;
    }
}

loc_80719BF4:
{
    r20 = 0x809C0000u;
    r5 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r4 = 680;
    ctx->lr = 0x80719C08u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCDA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r4 = 680;
    r5 = 0;
    ctx->lr = 0x80719C20u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80719C20:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 680;
    r5 = 120;
    ctx->lr = 0x80719C3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719C54u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719C58:
{
    r0 = MemoryInline::FlatRead8((r29 + 18));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80719C90;
    }
}

loc_80719C64:
{
    r20 = 0x809C0000u;
    r5 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r4 = 680;
    ctx->lr = 0x80719C78u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCDA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r4 = 680;
    r5 = 0;
    ctx->lr = 0x80719C90u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80719C90:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 24));
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 680;
    r5 = 120;
    ctx->lr = 0x80719CACu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719CC8:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 680;
    r5 = 120;
    ctx->lr = 0x80719CE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719CFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719D00:
{
    r0 = MemoryInline::FlatRead8((r29 + 18));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80719D0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719D18;
    }
}

loc_80719D10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80719D14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80719D44;
    }
}

loc_80719D18:
{
    r20 = 0x809C0000u;
    r5 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r4 = 680;
    ctx->lr = 0x80719D2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCDA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r4 = 680;
    r5 = 0;
    ctx->lr = 0x80719D44u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80719D44:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 680;
    r5 = 120;
    ctx->lr = 0x80719D60u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719D78u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80719D7C:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 680;
    r5 = 120;
    ctx->lr = 0x80719D98u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x80719DB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80719B7C func_80719B7C preserves=true fpr_mask=0x00000000
