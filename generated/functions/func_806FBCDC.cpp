#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FBCDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FBCDC;

loc_806FBCDC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
}

loc_806FBD04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806FBD10;
    }
}

loc_806FBD08:
{
    r0 = MemoryInline::FlatRead8((r4 + 112));
    goto loc_806FBD14;
}

loc_806FBD10:
{
    r0 = 0;
}

loc_806FBD14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FBD18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FBD3C;
    }
}

loc_806FBD1C:
{
    r30 = (r3 + 28);
    r31 = 0;
}

loc_806FBD24:
{
    r3 = r30;
    ctx->lr = 0x806FBD2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FD818u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 1);
    r30 = (r30 + 116);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_806FBD38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FBD24;
    }
}

loc_806FBD3C:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_806FBD44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FBD54;
    }
}

loc_806FBD48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(54));
}

loc_806FBD4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FBD60;
    }
}

loc_806FBD50:
{
    goto loc_806FBDF8;
}

loc_806FBD54:
{
    r3 = r29;
    ctx->lr = 0x806FBD5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FD0ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806FBDF8;
}

loc_806FBD60:
{
    r3 = MemoryInline::FlatRead32((r29 + 396));
    r31 = MemoryInline::FlatRead8((r29 + 393));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FBD6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FBD8C;
    }
}

loc_806FBD70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FBD7C;
    }
}

loc_806FBD74:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806FBD80;
}

loc_806FBD7C:
{
    r0 = -1;
}

loc_806FBD80:
{
}

loc_806FBD84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(641))) {
        goto loc_806FBD8C;
    }
}

loc_806FBD88:
{
    r31 = 1;
}

loc_806FBD8C:
{
    r0 = MemoryInline::FlatRead8((r29 + 392));
}

loc_806FBD94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806FBDC0;
    }
}

loc_806FBD98:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_806FBD9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FBDC0;
    }
}

loc_806FBDA0:
{
    r3 = 0x809C0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4964));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    r5 = 20;
    ctx->lr = 0x806FBDBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F9E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806FBDEC;
}

loc_806FBDC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806FBDC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FBDEC;
    }
}

loc_806FBDC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806FBDCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FBDEC;
    }
}

loc_806FBDD0:
{
    r3 = 0x809C0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4968));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    r5 = 60;
    ctx->lr = 0x806FBDECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F9E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FBDEC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 392), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 393), static_cast<uint8_t>(r0));
}

loc_806FBDF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FBCDC func_806FBCDC preserves=true fpr_mask=0x00000000
