#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D130(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8005D130;

loc_8005D130:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6_addr_0 = (r6 + r0);
    r5 = MemoryInline::FlatRead16(r6_addr_0);
    r0 = (r5 & 49152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005D154:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005D168;
    }
}

loc_8005D158:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    r3 = r31;
    goto loc_8005D190;
}

loc_8005D168:
{
    r6 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8005D170:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005D180;
    }
}

loc_8005D174:
{
    r0 = (r5 * 76);
    r3 = (r6 + r0);
    goto loc_8005D190;
}

loc_8005D180:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    r3 = (r3 + 44);
    ctx->lr = 0x8005D18Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80055540u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
}

loc_8005D190:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEE7F gpr_write=0x800011FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8005D130 func_8005D130 preserves=true fpr_mask=0x00000000
