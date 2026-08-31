#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80729B9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80729B9C;

loc_80729B9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -25592);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r4 = MemoryInline::FlatRead32((r3 + 196));
    MemoryInline::FlatWriteFloat32((r3 + 204), f0.d);
    r29 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r29 + 28), r0);
    r5 = MemoryInline::FlatRead32((r3 + 196));
    r4 = MemoryInline::FlatRead32((r3 + 200));
    r28 = MemoryInline::FlatRead32((r5 + 8));
    ctx->lr = 0x80729BF0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80729868u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80729BFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80729C08;
    }
}

loc_80729C00:
{
    f1.d = f2.d;
    goto loc_80729C14;
}

loc_80729C08:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80729C0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80729C14;
    }
}

loc_80729C10:
{
    f1.d = f0.d;
}

loc_80729C14:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    r3 = r28;
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x80729C24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073BD08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r30 + 192));
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r4));
    r3 = (r3 * r4);
    r3 = (r5 - r3);
}

loc_80729C40:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80729C50;
    }
}

loc_80729C44:
{
    r0 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r29 + 28), r0);
}

loc_80729C50:
{
    r3 = MemoryInline::FlatRead32((r30 + 192));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 192), r3);
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80729C64:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80729C88;
    }
}

loc_80729C68:
{
    r5 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 200));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 11088));
    ctx->lr = 0x80729C80u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80729728u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80729C84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80729C94;
    }
}

loc_80729C88:
{
    r3 = r30;
    r4 = (r30 + 100);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80729C94:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003F gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0xC000001F fpr_write=0xC00000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80729B9C func_80729B9C preserves=true fpr_mask=0x00000000
