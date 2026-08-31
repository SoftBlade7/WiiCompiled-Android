#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80158FA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80158FA8;

loc_80158FA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80158FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80159034;
    }
}

loc_80158FB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80158FC8;
    }
}

loc_80158FB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80158FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80158FD4;
    }
}

loc_80158FC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80158FE4;
    }
}

loc_80158FC4:
{
    goto loc_80159034;
}

loc_80158FC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80158FCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80159034;
    }
}

loc_80158FD0:
{
    goto loc_80159000;
}

loc_80158FD4:
{
    r0 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015932Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r22 = ctx->gpr[22];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    return;
}

loc_80158FE4:
{
    r4 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015932Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r22 = ctx->gpr[22];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    return;
}

loc_80159000:
{
    r5 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r5 = (r5_rot_0 & -65536);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r6 + r5);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015932Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r22 = ctx->gpr[22];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    return;
}

loc_80159034:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_80159054;
}

loc_80159040:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80159054:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8015905C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80159040;
    }
}

loc_80159060:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015932Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r22 = ctx->gpr[22];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[22] = r22;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x65C0001B gpr_write=0xFFE0087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80158FA8 func_80158FA8 preserves=true fpr_mask=0x00000000
