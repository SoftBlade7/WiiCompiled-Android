#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FD9E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FD9E0;

loc_806FD9E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_806FD9EC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 4960);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(745))) {
        goto loc_806FDA18;
    }
}

loc_806FDA10:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(859));
}

loc_806FDA14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FDA44;
    }
}

loc_806FDA18:
{
    r3 = MemoryInline::FlatRead32((r3 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FDA20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FDA44;
    }
}

loc_806FDA24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FDA30;
    }
}

loc_806FDA28:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806FDA34;
}

loc_806FDA30:
{
    r0 = -1;
}

loc_806FDA34:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FDA38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FDA44;
    }
}

loc_806FDA3C:
{
    r3 = 0;
    goto loc_806FDAC8;
}

loc_806FDA44:
{
    r3 = 0x809C0000u;
    r5 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r4 = (r29 + 376);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x806FDA64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = MemoryInline::FlatRead8((r4 + 9033));
    r0 = (r4 + -2);
}

loc_806FDA78:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_806FDAAC;
    }
}

loc_806FDA7C:
{
}

loc_806FDA80:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_806FDAA0;
    }
}

loc_806FDA84:
{
}

loc_806FDA88:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(2))) {
        goto loc_806FDAA0;
    }
}

loc_806FDA8C:
{
}

loc_806FDA90:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_806FDAA8;
    }
}

loc_806FDA94:
{
}

loc_806FDA98:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(3))) {
        goto loc_806FDAA8;
    }
}

loc_806FDA9C:
{
    goto loc_806FDAAC;
}

loc_806FDAA0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    goto loc_806FDAAC;
}

loc_806FDAA8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
}

loc_806FDAAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FDAB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FDAC4;
    }
}

loc_806FDAB4:
{
    r3 = MemoryInline::FlatRead32((r29 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FDABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FDAC4;
    }
}

loc_806FDAC0:
{
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
}

loc_806FDAC4:
{
    r3 = (r29 + 376);
}

loc_806FDAC8:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FD9E0 func_806FD9E0 preserves=true fpr_mask=0x00000000
