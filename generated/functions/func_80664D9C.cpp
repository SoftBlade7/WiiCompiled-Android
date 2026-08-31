#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80664D9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80664D9C;

loc_80664D9C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80664DA8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80664EE8;
    }
}

loc_80664DB8:
{
    r5 = 0x809C0000u;
    r0 = 2;
    r7 = MemoryInline::FlatRead32((r5 + 8408));
    r8 = 0;
    r9 = 0;
    r5 = MemoryInline::FlatRead32((r7 + 10524));
    r5 = (r5 * 88);
    r5 = (r7 + r5);
    r6 = MemoryInline::FlatRead8((r5 + 89));
    ctr = r0;
}

loc_80664DE0:
{
}

loc_80664DE4:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r6))) {
        goto loc_80664E04;
    }
}

loc_80664DE8:
{
    r0 = (r9 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80664DFC:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80664E04;
    }
}

loc_80664E00:
{
    r8 = r0;
}

loc_80664E04:
{
    r9 = (r9 + 1);
}

loc_80664E0C:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r6))) {
        goto loc_80664E2C;
    }
}

loc_80664E10:
{
    r0 = (r9 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80664E24:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80664E2C;
    }
}

loc_80664E28:
{
    r8 = r0;
}

loc_80664E2C:
{
    r9 = (r9 + 1);
}

loc_80664E34:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r6))) {
        goto loc_80664E54;
    }
}

loc_80664E38:
{
    r0 = (r9 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80664E4C:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80664E54;
    }
}

loc_80664E50:
{
    r8 = r0;
}

loc_80664E54:
{
    r9 = (r9 + 1);
}

loc_80664E5C:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r6))) {
        goto loc_80664E7C;
    }
}

loc_80664E60:
{
    r0 = (r9 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80664E74:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80664E7C;
    }
}

loc_80664E78:
{
    r8 = r0;
}

loc_80664E7C:
{
    r9 = (r9 + 1);
}

loc_80664E84:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r6))) {
        goto loc_80664EA4;
    }
}

loc_80664E88:
{
    r0 = (r9 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80664E9C:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80664EA4;
    }
}

loc_80664EA0:
{
    r8 = r0;
}

loc_80664EA4:
{
    r9 = (r9 + 1);
}

loc_80664EAC:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(r6))) {
        goto loc_80664ECC;
    }
}

loc_80664EB0:
{
    r0 = (r9 & 255);
    r0 = (r0 * 48);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 32));
}

loc_80664EC4:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80664ECC;
    }
}

loc_80664EC8:
{
    r8 = r0;
}

loc_80664ECC:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80664DE0;
    }
}

loc_80664ED4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80664ED8:
{
    MemoryInline::FlatWrite32((r7 + 10688), r8);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80664EE8;
    }
}

loc_80664EE0:
{
    r3 = r31;
    ctx->lr = 0x80664EE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229E14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80664EE8:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80664D9C func_80664D9C preserves=true fpr_mask=0x00000000
