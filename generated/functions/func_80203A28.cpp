#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80203A28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80203A28;

loc_80203A28:
{
    r0 = 2;
    r7 = r3;
    r6 = r4;
    r8 = (r5 & 8);
    r10 = 0;
    ctr = r0;
}

loc_80203A40:
{
    r9 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203B4C;
    }
}

loc_80203A4C:
{
}

loc_80203A50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80203B4C;
    }
}

loc_80203A54:
{
}

loc_80203A58:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80203A78;
    }
}

loc_80203A5C:
{
}

loc_80203A60:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_80203A78;
    }
}

loc_80203A64:
{
}

loc_80203A68:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(90))) {
        goto loc_80203A78;
    }
}

loc_80203A6C:
{
    r0 = (r9 + 32);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_80203A7C;
}

loc_80203A78:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r9));
}

loc_80203A7C:
{
    r9 = MemoryInline::FlatRead8((r7 + 1));
    r10 = (r10 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203B4C;
    }
}

loc_80203A8C:
{
}

loc_80203A90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80203B4C;
    }
}

loc_80203A94:
{
}

loc_80203A98:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80203AB8;
    }
}

loc_80203A9C:
{
}

loc_80203AA0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_80203AB8;
    }
}

loc_80203AA4:
{
}

loc_80203AA8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(90))) {
        goto loc_80203AB8;
    }
}

loc_80203AAC:
{
    r0 = (r9 + 32);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    goto loc_80203ABC;
}

loc_80203AB8:
{
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r9));
}

loc_80203ABC:
{
    r9 = MemoryInline::FlatRead8((r7 + 2));
    r10 = (r10 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203B4C;
    }
}

loc_80203ACC:
{
}

loc_80203AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80203B4C;
    }
}

loc_80203AD4:
{
}

loc_80203AD8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80203AF8;
    }
}

loc_80203ADC:
{
}

loc_80203AE0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_80203AF8;
    }
}

loc_80203AE4:
{
}

loc_80203AE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(90))) {
        goto loc_80203AF8;
    }
}

loc_80203AEC:
{
    r0 = (r9 + 32);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    goto loc_80203AFC;
}

loc_80203AF8:
{
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r9));
}

loc_80203AFC:
{
    r9 = MemoryInline::FlatRead8((r7 + 3));
    r10 = (r10 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80203B4C;
    }
}

loc_80203B0C:
{
}

loc_80203B10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(46))) {
        goto loc_80203B4C;
    }
}

loc_80203B14:
{
}

loc_80203B18:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80203B38;
    }
}

loc_80203B1C:
{
}

loc_80203B20:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_80203B38;
    }
}

loc_80203B24:
{
}

loc_80203B28:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(90))) {
        goto loc_80203B38;
    }
}

loc_80203B2C:
{
    r0 = (r9 + 32);
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    goto loc_80203B3C;
}

loc_80203B38:
{
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r9));
}

loc_80203B3C:
{
    r10 = (r10 + 1);
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80203A40;
    }
}

loc_80203B4C:
{
    r3_addr_0 = (r3 + r10);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80203B58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_80203B68;
    }
}

loc_80203B5C:
{
    r0 = 46;
    r4_addr_1 = (r4 + r10);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r0));
    r10 = (r10 + 1);
}

loc_80203B68:
{
    r7 = (r10 + 3);
    r6 = (r5 & 16);
    r0 = (r7 - r10);
    r5 = (r3 + r10);
    r3 = (r4 + r10);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r7));
}

loc_80203B84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80203BCC;
    }
}

loc_80203B88:
{
    r7 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80203BCC;
    }
}

loc_80203B94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80203B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80203BB8;
    }
}

loc_80203B9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(65));
}

loc_80203BA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80203BB8;
    }
}

loc_80203BA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_80203BA8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80203BB8;
    }
}

loc_80203BAC:
{
    r0 = (r7 + 32);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_80203BBC;
}

loc_80203BB8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
}

loc_80203BBC:
{
    r10 = (r10 + 1);
    r3 = (r3 + 1);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80203B88;
    }
}

loc_80203BCC:
{
    r0 = 0;
    r4_addr_3 = (r4 + r10);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80203A28 func_80203A28 preserves=true fpr_mask=0x00000000
