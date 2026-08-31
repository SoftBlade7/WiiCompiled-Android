#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80726CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
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
    uint32_t cr = ctx->cr;

    goto loc_80726CB0;

loc_80726CB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    f1.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9152));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80726CD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80726CEC;
    }
}

loc_80726CDC:
{
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -26384));
    f1.d = (-(f0.d));
    goto loc_80726CF4;
}

loc_80726CEC:
{
    r3 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -26384));
}

loc_80726CF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0xF000000B gpr_return=0x00000008 fpr_read=0x0000007C fpr_write=0x0000000B fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80726CB0 func_80726CB0 preserves=true fpr_mask=0x00000000
