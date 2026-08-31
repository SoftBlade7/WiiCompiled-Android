#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9F48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E9F48;

loc_801E9F48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x801E9F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r0 = (r3 + -1212219392);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(17729));
}

loc_801E9F68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9F84;
    }
}

loc_801E9F6C:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x801E9F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8CF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9F7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9F84;
    }
}

loc_801E9F80:
{
    goto loc_801EA030;
}

loc_801E9F84:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x801E9F90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8CF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9F9C;
    }
}

loc_801E9F98:
{
    goto loc_801EA030;
}

loc_801E9F9C:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r5 = MemoryInline::FlatRead16(r31);
}

loc_801E9FA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E9FB4;
    }
}

loc_801E9FAC:
{
    r3 = (r4 + 13824);
    goto loc_801E9FB8;
}

loc_801E9FB4:
{
    r3 = 0;
}

loc_801E9FB8:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801E9FC0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_801E9FCC;
    }
}

loc_801E9FC4:
{
}

loc_801E9FC8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_801E9FD4;
    }
}

loc_801E9FCC:
{
    r3 = -3;
    goto loc_801EA004;
}

loc_801E9FD4:
{
}

loc_801E9FD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E9FE4;
    }
}

loc_801E9FDC:
{
    r4 = (r4 + 13824);
    goto loc_801E9FE8;
}

loc_801E9FE4:
{
    r4 = 0;
}

loc_801E9FE8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801E9FFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA004;
    }
}

loc_801EA000:
{
    r3 = -13;
}

loc_801EA004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA008:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA010;
    }
}

loc_801EA00C:
{
    goto loc_801EA030;
}

loc_801EA010:
{
    r3 = r31;
    ctx->lr = 0x801EA018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EB644u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA01C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA024;
    }
}

loc_801EA020:
{
    goto loc_801EA030;
}

loc_801EA024:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
}

loc_801EA030:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E9F48 func_801E9F48 preserves=true fpr_mask=0x00000000
