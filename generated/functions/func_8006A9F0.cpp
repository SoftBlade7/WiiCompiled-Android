#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006A9F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006A9F0;

loc_8006A9F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8006AA08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006AA60;
    }
}

loc_8006AA0C:
{
    // inline leaf 0x80064440 (3 guest instruction(s))
    r3 = 0x802C0000u;
    r3 = (r3 + -11032);
    // end of inlined leaf 0x80064440
    r0 = MemoryInline::FlatRead8((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006AA18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006AA44;
    }
}

loc_8006AA1C:
{
    r0 = MemoryInline::FlatRead32((r31 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 220));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 224));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & 1);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 228));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 232));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 236));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 240));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x80173378u>(ctx);
    goto loc_8006AA60;
}

loc_8006AA44:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 220));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 224));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 228));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 232));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 236));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 240));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x801733B4u>(ctx);
}

loc_8006AA60:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x8000000B gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x0000007E fpr_write=0x0000007E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006A9F0 func_8006A9F0 preserves=true fpr_mask=0x00000000
