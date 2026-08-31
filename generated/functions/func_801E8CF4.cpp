#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E8CF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E8CF4;

loc_801E8CF4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801E8D1C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E8D28;
    }
}

loc_801E8D20:
{
    r30 = (r5 + 13824);
    goto loc_801E8D2C;
}

loc_801E8D28:
{
    r30 = 0;
}

loc_801E8D2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E8D30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8D3C;
    }
}

loc_801E8D34:
{
    r3 = -3;
    goto loc_801E8DFC;
}

loc_801E8D3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801E8D40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8D4C;
    }
}

loc_801E8D44:
{
    r3 = -9;
    goto loc_801E8DFC;
}

loc_801E8D4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E8D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E8D64;
    }
}

loc_801E8D58:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E8D60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8D6C;
    }
}

loc_801E8D64:
{
    r3 = -3;
    goto loc_801E8DFC;
}

loc_801E8D6C:
{
}

loc_801E8D70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E8DD8;
    }
}

loc_801E8D74:
{
    // inline leaf 0x801DCF68 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24380));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x801DCF68
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E8D7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8DD8;
    }
}

loc_801E8D80:
{
    r31 = MemoryInline::FlatRead32((r28 + 8));
    ctx->lr = 0x801E8D88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC7BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 & -256);
    r0 = (r31 & -256);
    r0 = (r3 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_801E8D9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E8DD8;
    }
}

loc_801E8DA0:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r31 = 0;
    r29 = MemoryInline::FlatRead16((r28 + 20));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E8DB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E8DC8;
    }
}

loc_801E8DB4:
{
    ctx->lr = 0x801E8DB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_801E8DC0:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_801E8DC8;
    }
}

loc_801E8DC4:
{
    r31 = 1;
}

loc_801E8DC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801E8DCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E8DD8;
    }
}

loc_801E8DD0:
{
    r3 = -7;
    goto loc_801E8DFC;
}

loc_801E8DD8:
{
    r3 = MemoryInline::FlatRead16(r28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65535));
}

loc_801E8DE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E8DF8;
    }
}

loc_801E8DE4:
{
    r0 = MemoryInline::FlatRead16((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801E8DEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E8DF8;
    }
}

loc_801E8DF0:
{
    r3 = -3;
    goto loc_801E8DFC;
}

loc_801E8DF8:
{
    r3 = 0;
}

loc_801E8DFC:
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
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E8CF4 func_801E8CF4 preserves=true fpr_mask=0x00000000
