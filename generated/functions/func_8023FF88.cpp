#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023FF88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023FF88;

loc_8023FF88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023FFAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024002C;
    }
}

loc_8023FFB0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r31 = r29;
    r30 = 0;
    r0 = (r0 & -3);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8023FFC4:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8023FFCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8023FFEC;
    }
}

loc_8023FFD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023FFD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023FFEC;
    }
}

loc_8023FFDC:
{
    ctx->lr = 0x8023FFE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023F15Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_8023FFEC:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
}

loc_8023FFF8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(16))) {
        goto loc_8023FFC4;
    }
}

loc_8023FFFC:
{
    r30 = 0;
}

loc_80240000:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
}

loc_80240008:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8024001C;
    }
}

loc_8024000C:
{
    r0 = MemoryInline::FlatRead32((r3 + 276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80240014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024001C;
    }
}

loc_80240018:
{
    ctx->lr = 0x8024001Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023F15Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8024001C:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(16));
}

loc_80240028:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80240000;
    }
}

loc_8024002C:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FF gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0xE000E73F fpr_write=0xE000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023FF88 func_8023FF88 preserves=true fpr_mask=0x00000000
