#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006A7C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006A7C0;

loc_8006A7C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8006A7CC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A884;
    }
}

loc_8006A7E0:
{
    r31 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8006A7E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A884;
    }
}

loc_8006A7EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A7F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A878;
    }
}

loc_8006A7F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r3 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A800:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A828;
    }
}

loc_8006A804:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 188));
    r3 = (r31 + 48);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 192));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 180));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 184));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019AB4Cu>(ctx);
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    goto loc_8006A86C;
}

loc_8006A828:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A82C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A854;
    }
}

loc_8006A830:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 188));
    r3 = (r31 + 48);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 192));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 180));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 184));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019A9C4u>(ctx);
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f6 = ctx->fpr[6];
    goto loc_8006A86C;
}

loc_8006A854:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 172));
    r3 = (r31 + 48);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 176));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 180));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 184));
    ctx->lr = 0x8006A86Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019AA60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8006A86C:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r31 + 112), r0);
}

loc_8006A878:
{
    r3 = r30;
    r4 = (r31 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x80085B80u>(ctx);
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
}

loc_8006A884:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF803FFE fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006A7C0 func_8006A7C0 preserves=true fpr_mask=0x00000000
