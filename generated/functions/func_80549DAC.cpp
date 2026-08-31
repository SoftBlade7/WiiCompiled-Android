#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549DAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80549DAC;

loc_80549DAC:
{
    r7 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r7 + -2);
}

loc_80549DB8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80549DC4;
    }
}

loc_80549DBC:
{
    r7 = 0;
    goto loc_80549DE8;
}

loc_80549DC4:
{
    r6 = 0x80890000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r6 + 3368);
    r7 = (r4 * 66);
    r6_addr_1 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = (r7 + r0);
    r6 = (r0 * 10240);
    r7 = (r6 + 196608);
    r7 = (r7 + -32768);
}

loc_80549DE8:
{
    r6 = 65536;
    MemoryInline::FlatWrite32((r3 + 32), r7);
    r0 = (r6 + -27664);
    r8 = 0;
    r0 = (r4 * r0);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    r6 = 1;
    r4 = (r3 + r0);
    r7 = (r4 + 56);
    goto loc_80549EB0;
}

loc_80549E10:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r9 = 0;
}

loc_80549E1C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_80549E28;
    }
}

loc_80549E20:
{
}

loc_80549E24:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_80549E9C;
    }
}

loc_80549E28:
{
}

loc_80549E2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80549E44;
    }
}

loc_80549E30:
{
}

loc_80549E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80549E64;
    }
}

loc_80549E38:
{
}

loc_80549E3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80549E84;
    }
}

loc_80549E40:
{
    goto loc_80549EA0;
}

loc_80549E44:
{
    r4 = (r7 + 65536);
    r0 = (r8 & 255);
    r4 = MemoryInline::FlatRead32((r4 + -28064));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80549EA0;
    }
}

loc_80549E5C:
{
    r9 = 1;
    goto loc_80549EA0;
}

loc_80549E64:
{
    r4 = (r7 + 65536);
    r0 = (r8 & 255);
    r4 = MemoryInline::FlatRead32((r4 + -28060));
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80549EA0;
    }
}

loc_80549E7C:
{
    r9 = 1;
    goto loc_80549EA0;
}

loc_80549E84:
{
    r4 = (r7 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -28056));
}

loc_80549E90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80549EA0;
    }
}

loc_80549E94:
{
    r9 = 1;
    goto loc_80549EA0;
}

loc_80549E9C:
{
    r9 = 1;
}

loc_80549EA0:
{
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r8 & 65535);
    r8 = (r8 + 1);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r9));
}

loc_80549EB0:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r4 = (r8 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80549EBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80549E10;
    }
}

loc_80549EC0:
{
    r5 = (r3 + 131072);
    r0 = 1;
    r4 = 0x80550000u;
    MemoryInline::FlatWrite8((r5 + 20480), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r4 = (r4 + -25532);
    r5 = 0;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80242C18u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80549DAC func_80549DAC preserves=true fpr_mask=0x00000000
